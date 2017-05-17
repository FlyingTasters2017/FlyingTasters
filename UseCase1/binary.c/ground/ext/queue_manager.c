/* Written by Cyril Colombo, 2006 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

#include <stdarg.h>

#include <time.h>

#include "queue_manager.h"
#include "debug_messages.h"

// Local constants definition
//
// CCY 28/08/08 : (NECESSARY IMPROVEMENT) 
// The size of the constant below shall be determined from the analysis of the model
//
// TT 06/04/16 : Moved the allocation of T_full_message to the heap, since this
// is supposed to happen on the ground. Tremendous stack space savings (e.g. in Demo_Ada_GUI).

// Define a constant for the maximum size of structures to be stored in a queue in bytes
#define MAX_STORABLE_DATA_STRUCTURE_SIZE 131072

// Define a constant for the max size of the buffer to contain the queue location and name
#define MAX_QUEUE_NAME_SIZE 1024

#define MAX_POSSIBLE_QUEUES 1024

typedef struct tagQinfo {
    mqd_t q;
    int isPython;
    char *name;
} Qinfo;
Qinfo qinfo[MAX_POSSIBLE_QUEUES];
int qinfoIdx = 0;

int isApythonQ(mqd_t q)
{
    int i=0;
    for(i=0; i<qinfoIdx; i++) {
	if (q == qinfo[i].q && qinfo[i].isPython) 
	    return 1;
    }
    return 0;
}

char *nameOfQ(mqd_t q)
{
    int i;
    for(i=0; i<qinfoIdx; i++) {
	if (q == qinfo[i].q)
	    return qinfo[i].name;
    }
    return NULL;
}

//
// Local types definitions
//

typedef struct
{
    int message_identifier;
    char message[MAX_STORABLE_DATA_STRUCTURE_SIZE];
} T_full_message;

//
// Internal functions definition
//

void build_full_queue_name(char* queue_name, char* full_queue_name)
{ 
    // Reset name  
    strcpy(full_queue_name, "");
    // First get where to create the queues in local area
    // full_queue_name = getenv ("HOME");   
    // Create the full name for the queue
    strcat(full_queue_name, "/");
    strcat(full_queue_name, queue_name);      
}

//
// External functions definition
//

void checkMQsize(void)
{
    static char tmp[1024];
    FILE *fp = fopen("/proc/sys/fs/mqueue/msg_max", "r");
    if (fgets(tmp, sizeof(tmp), fp)) {
	int value = atoi(tmp);
	if (value<100) {
	    debug_printf(LVL_PANIC, 
		"/proc/sys/fs/mqueue/msg_max is set too low.\n"
		"You must do one of the following (from a root shell):\n\n"
		"  echo 100 > /proc/sys/fs/mqueue/msg_max\n\n"
		"or\n\n"
		"  sysctl fs.mqueue.msg_max=100\n\n"
	        "and re-run.\n"
	        "If you have 'sudo' installed, you can do it directly:\n\n"
		"  echo 100 | sudo tee /proc/sys/fs/mqueue/msg_max\n\n"
		"(give your account password when prompted).\n"
		"You can also make the change permanent, across reboots,\n"
		"by editing (as root) /etc/sysctl.conf and adding this line:\n\n"
		"  fs.mqueue.msg_max = 100\n\nAborting...\n\n");
	    exit(-1);
	}
    } else {
	debug_printf(LVL_PANIC, "Can't read /proc/sys/fs/mqueue/msg_max - Aborting...\n\n");
	exit(-1);
    }
    fclose(fp);
}

int create_exchange_queue(char* queue_name, long max_msg_nubmer, long max_msg_size, mqd_t* p_queue_id)
{
    mqd_t 		msgq_id;				// Queue identifier
    // unsigned int 	msgprio = 0;				// Message priority...not used !
    struct mq_attr 	msgq_attr;				// Structure containing the queue attributes   
    char 		full_queue_name[MAX_QUEUE_NAME_SIZE];	// To contain the full name of the queue
 
    checkMQsize();

    debug_printf(LVL_INFO, "create_exchange_queue: entering (%s)\n", queue_name);

    // First build the full name
    build_full_queue_name(queue_name, full_queue_name); 
    debug_printf(LVL_INFO, "create_exchange_queue: trying to create queue %s\n", full_queue_name);

    // Fills the queue attribute structure
    msgq_attr.mq_flags = O_NONBLOCK;		// Operations will be non blocking
    msgq_attr.mq_maxmsg = max_msg_nubmer;	// Max. numbr of messages
    msgq_attr.mq_msgsize = max_msg_size;     	// Max. size of a message (ie. size of the biggest type)

    // Try to open the queue
    msgq_id = mq_open(full_queue_name,
 		      O_RDWR | O_CREAT | O_EXCL | O_NONBLOCK,
 		      S_IRWXU | S_IRWXG,
 		      &msgq_attr);		    	     

    // Test if opening the queue failed
    if (msgq_id == (mqd_t)-1) {
        // We failed : try to detach a previously existing queue
        //
        //Disabled, 2011-01-12: this warning is useless, the queue will be unlinked below anyway
        //perror("create_exchange_queue: first attempt to mq_open()");
        debug_printf(LVL_INFO, "create_exchange_queue: trying to unlink an existing queue...\n");
        // Try to unlink and test if failed
        if(mq_unlink(full_queue_name) == -1) {
	    // It seems we have a serious problem here...
	    perror("create_exchange_queue: in mq_unlink()");
	    debug_printf(LVL_ERROR, "create_exchange_queue: failed while trying to unlink %s\n", full_queue_name);
            return(-1);
        }
        // Try again...
        debug_printf(LVL_INFO, "create_exchange_queue: trying to reopen after unlinking...\n");
        msgq_id = mq_open(  full_queue_name,
			    O_RDWR | O_CREAT | O_EXCL | O_NONBLOCK,
			    S_IRWXU | S_IRWXG,
			    &msgq_attr);
  
        // Test if queue could be reopened
        if (msgq_id == (mqd_t)-1) {
	    // It seems we have a serious problem here...
	    perror("create_exchange_queue: In mq_open()");
	    debug_printf(LVL_ERROR, "create_exchange_queue: failed to reopen after unlinking %s\n", full_queue_name);
	    exit(-1);
        }
    }
 
    // output parameter (queue handle)
    *p_queue_id = msgq_id;

    if(qinfoIdx > MAX_POSSIBLE_QUEUES) {
	debug_printf(LVL_ERROR, "Out of Q slots, recompile with larger MAX_POSSIBLE_QUEUES\n");
	exit(-1);
    }
    qinfo[qinfoIdx].q = msgq_id;
    // If it is a Python queue, keep a note
    if (strstr(full_queue_name, "Python")) {
	debug_printf(LVL_INFO, "create_exchange_queue: this was a Python queue\n");
	qinfo[qinfoIdx].isPython = 1;
    } else
	qinfo[qinfoIdx].isPython = 0;
    qinfo[qinfoIdx++].name = strdup(full_queue_name);

    // Getting the attributes from the queue to display
    mq_getattr(msgq_id, &msgq_attr);
    debug_printf(  LVL_INFO, 
           	   "create_exchange_queue: created queue \"%s\" handle id %i :\n"
           	   "\t- stores at most %ld messages\n"
           	   "\t- large at most %ld bytes each\n"
           	   "\t- currently holds %ld messages\n",
           	   full_queue_name,
           	   msgq_id,
           	   msgq_attr.mq_maxmsg,
           	   msgq_attr.mq_msgsize,
           	   msgq_attr.mq_curmsgs);
 
    debug_printf(LVL_INFO, "create_exchange_queue: returning (%s)\n\n", queue_name);
    return 0;
}

int retrieve_message_from_queue(mqd_t queue_id, long max_message_length, void* message_data_received, int* message_received_type)
{
    unsigned int sender = 0;	// Unused sender identifier
    char* msgcontent = NULL;	// Buffer for reception of the message

    debug_printf(LVL_INFO, "retrieve_message_from_queue: entering (%d)\n", queue_id);
    debug_printf(LVL_INFO, "retrieve_message_from_queue: trying to retrieve data from queue number %i\n", queue_id);

    // Allocate memory for reception buffer
    msgcontent = (char*)malloc(sizeof(char) * max_message_length);
    if (msgcontent == NULL) {
	// Here we have a real problem...
	debug_printf(LVL_ERROR, "retrieve_message_from_queue: malloc failed\n\n");      
	return(-1);
    }

    // Get one message from the queue (non blocking call if queue opened with appropriate parameters)
    ssize_t msgsz = mq_receive(queue_id, msgcontent, max_message_length, &sender);

    // Test the size to detect potential error
    if (msgsz == -1) {
        // Test if we have a "true" error, or just an empty queue
        if (errno != EAGAIN) {
	    // Here we have real problem...
            perror("retrieve_message_from_queue: in mq_receive()");
            debug_printf(LVL_ERROR, "retrieve_message_from_queue: returning, failed...\n\n");      
	    free(msgcontent);
            return(-1);
        }
        // Implicit else : correspond to the case of an empty queue. Just
        // do nothing and wait next call to see if somebody added someting
        // in the queue...so, return with no error after freeing memory       
        free(msgcontent);
        return(-1);
    }

    // There is a message in the queue:

    // Retrieve message type identifier
    memcpy(message_received_type, msgcontent, sizeof(int));
    debug_printf(LVL_INFO, "retrieve_message_from_queue: mesage received identifier = %i\n", *message_received_type);

    // Retrieve the functional content of the message
    memcpy(message_data_received, msgcontent + sizeof(int), msgsz - sizeof(int));

    free(msgcontent);
    debug_printf(LVL_INFO, "retrieve_message_from_queue: returning (%d)\n\n", queue_id);
    return(0);
}

int write_message_to_queue(mqd_t queue_id, long message_data_length, void* message_data_sent, int message_sent_type)
{
    T_full_message *p_full_message;   // To contain discriminant and functionnal message
    int send_res;
    struct mq_attr mqstat;
    int message_received_type = 0;
 
    debug_printf(LVL_INFO, "write_message_to_queue: entering (%d)\n", queue_id);
    debug_printf(LVL_INFO, "write_message_to_queue: trying to write data in queue %i\n", queue_id);
    mq_getattr(queue_id, &mqstat);
    debug_printf(LVL_INFO, "write_message_to_queue: queue %i currently holds %d/%d messages\n", queue_id, mqstat.mq_curmsgs, mqstat.mq_maxmsg);
    
    p_full_message = (T_full_message *) malloc(sizeof(T_full_message));
    if (!p_full_message) {
        debug_printf(LVL_PANIC, "Failed to allocate message on the heap\n");
        return(-1);
    }
    // Build the full message...
  
    // Set the identifier
    p_full_message->message_identifier = message_sent_type;
    // Test if the message has also data associated to the message identifier 
    if (message_data_length > 0) { 
	// Copy the functional part of the message
	memcpy(p_full_message->message, message_data_sent, message_data_length);
    }
    
    // First empty the queue, then write the message 
    if (mqstat.mq_curmsgs == mqstat.mq_maxmsg)
    {
    	char message_data_received[mqstat.mq_msgsize];
	int bErrorsIgnored = 0;
	int isitaPythonQ = isApythonQ(queue_id);
	debug_printf(LVL_INFO, "write_message_to_queue: is it a Python Q? %d\n", isitaPythonQ);
	if (isitaPythonQ)
	    bErrorsIgnored = (NULL != getenv("ASSERT_IGNORE_PYTHON_ERRORS"))?1:0;
	else
	    bErrorsIgnored = (NULL != getenv("ASSERT_IGNORE_GUI_ERRORS"))?1:0;
	if (!bErrorsIgnored) {
	    debug_printf(LVL_ERROR, 
			 "write_message_to_queue: MESSAGE LOST, Queue %s was full, had to empty %d msgs in order to send msg type %d\n", 
			 nameOfQ(queue_id), mqstat.mq_curmsgs, message_sent_type);
	    printf(      "If you are not using %s, you can hide this message by setting:\n"
			 "    export ASSERT_IGNORE_%s_ERRORS=1\n"
			 "...before running.\n",
			 isitaPythonQ?"Python test scripts":"TM/TC GUIs",
			 isitaPythonQ?"PYTHON":"GUI");
	}
       	while (!retrieve_message_from_queue(queue_id, 
 					    mqstat.mq_msgsize, 
 					    message_data_received, 
 					    &message_received_type)) 
 	{
 	}
    }
    
    send_res = mq_send(queue_id, (char*)p_full_message, message_data_length + sizeof(int), 0);
    if (send_res == -1) {
 	perror("write_message_to_queue: in mq_send()");
 	debug_printf(LVL_ERROR, "write_message_to_queue: MESSAGE LOST, can't even be placed in the queue");
        free(p_full_message);
 	return(-1);
    }
      
    debug_printf(LVL_INFO, "write_message_to_queue: returning (%d)\n\n", queue_id);
    free(p_full_message);
    return(0);
}

int common(char* queue_name, mqd_t* queue_id, int forWrite)
{
    checkMQsize();

    // First build the full name
    char full_queue_name[MAX_QUEUE_NAME_SIZE] = ""; // To contain the full name of the queue
    build_full_queue_name(queue_name, full_queue_name); 
 
    debug_printf(LVL_INFO, "open_exchange_queue_for_%s: entering (%s)\n", queue_name, forWrite?"writing":"reading");
    debug_printf(LVL_INFO, "open_exchange_queue_for_%s: trying to open existing queue '%s' for reading operations\n", 
	queue_name, forWrite?"writing":"reading");
 
    // Try to open the queue as read-only and non-blocking read
    mqd_t open_res = mq_open(full_queue_name, (forWrite?O_RDWR:O_RDONLY) | O_NONBLOCK); 
 
    // Test for error
    if (open_res == -1) {
        // Error...
        perror("open_exchange_queue_: In mq_open()");
        debug_printf(LVL_ERROR, "open_exchange_queue_for_%s: returning, failed\n\n", forWrite?"writing":"reading");
        return(-1);
    } else {
        // return queue id with no error
        *queue_id = open_res;
 
	if(qinfoIdx > MAX_POSSIBLE_QUEUES) {
	    debug_printf(LVL_ERROR, "Out of Q slots, recompile with larger MAX_POSSIBLE_QUEUES\n");
	    exit(-1);
	}
	qinfo[qinfoIdx].q = open_res;
        // If it is a Python queue, keep a note
        if (strstr(queue_name, "Python")) {
	    debug_printf(LVL_INFO, "open_exchange_queue_for_%s: this was a Python queue", forWrite?"writing":"reading");
	    qinfo[qinfoIdx].isPython = 1;
	} else
	    qinfo[qinfoIdx].isPython = 0;
	qinfo[qinfoIdx++].name = strdup(full_queue_name);
        
        debug_printf(LVL_INFO, "open_exchange_queue_for_%s: returning (%s)\n\n", queue_name, forWrite?"writing":"reading");
        return(0);
    }
}

int open_exchange_queue_for_reading(char* queue_name, mqd_t* queue_id)
{
    return common(queue_name, queue_id, 0);
}

int open_exchange_queue_for_writing(char* queue_name, mqd_t* queue_id)
{
    return common(queue_name, queue_id, 1);
}

int delete_exchange_queue(mqd_t queue_id, char* queue_name)
{
    // First build the full name
    char full_queue_name[MAX_QUEUE_NAME_SIZE] = ""; // To contain the full name of the queue
    build_full_queue_name(queue_name, full_queue_name); 
    
    debug_printf(LVL_INFO, "delete_exchange_queue: entering (%d)\n", queue_id);
    debug_printf(LVL_INFO, "delete_exchange_queue: deleting queue '%s'\n", full_queue_name);
    
    // Close the queue
    if (mq_close(queue_id) == -1) {
 	// Error?
 	perror("delete_exchange_queue: In mq_close()");
 	debug_printf(LVL_ERROR, "delete_exchange_queue: returning, failed\n\n");
 	return(-1);
    }
 
    // Unlink the queue
    if (mq_unlink(full_queue_name) == -1) {
 	// Error display
 	perror("delete_exchange_queue: In mq_unlink()");
 	debug_printf(LVL_ERROR, "delete_exchange_queue: returning, failed\n\n");
 	return(-1);
    }
    
    debug_printf(LVL_INFO, "delete_exchange_queue: returning (%d)\n\n", queue_id);
    return(0);
}
