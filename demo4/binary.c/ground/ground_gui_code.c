#include <unistd.h>
#include <mqueue.h>
#include "queue_manager.h"
#include "ground_gui_header.h"



//Handle to the queue of incomming messages
static mqd_t    ground_RI_queue_id;



//Variable to contain the size of the biggest type of messqges to be handled for RI
int    ground_RI_max_msg_size = 0;



//Handle to the queue of incomming messages
static mqd_t    ground_PI_queue_id;


static mqd_t    ground_PI_Python_queue_id;



//Variable to contain the size of the biggest type of messqges to be handled for PI
int    ground_PI_max_msg_size = 0;


void ground_PI_gui_polling_ground()
{
   int msgsz = 0;
   unsigned int sender = 0;
   struct mq_attr msgq_attr;
   char* msgcontent = NULL;
   int msg_cnt = 0;
   T_ground_RI_list message_recieved_type;


   if ( (msgcontent = (char*)malloc( sizeof(char) * ground_RI_max_msg_size ) ) == NULL)
   {
      perror("Error when allocating memory in gui_cyc_ function");
      return;
   }

   mq_getattr(ground_RI_queue_id, &msgq_attr);

   while (!retrieve_message_from_queue(ground_RI_queue_id, ground_RI_max_msg_size, msgcontent, (int *)&message_recieved_type))
   {
      switch(message_recieved_type)
      {
       case i_Start_work : INVOKE_RI_Start_work (msgcontent);
                 break; 
       default : break;
      }
   }

   free(msgcontent);

   return;
}
void ground_PI_Thrust_Update(const asn1SccMyReal* H)
{
   //Create a variable of type T_Thrust_Update__data to be contained in the queue
   T_Thrust_Update__data Thrust_Update__data;

   Thrust_Update__data.H = *H;

   write_message_to_queue(ground_PI_queue_id, sizeof(T_Thrust_Update__data), (void*)&Thrust_Update__data, i_Thrust_Update);

   write_message_to_queue(ground_PI_Python_queue_id, sizeof(T_Thrust_Update__data), (void*)&Thrust_Update__data, i_Thrust_Update);

}

void ground_PI_dHeight(const asn1SccMyReal* dH)
{
   //Create a variable of type T_dHeight__data to be contained in the queue
   T_dHeight__data dHeight__data;

   dHeight__data.dH = *dH;

   write_message_to_queue(ground_PI_queue_id, sizeof(T_dHeight__data), (void*)&dHeight__data, i_dHeight);

   write_message_to_queue(ground_PI_Python_queue_id, sizeof(T_dHeight__data), (void*)&dHeight__data, i_dHeight);

}

int compute_max_queue_size_element_for_RI(void)
{
   int MAX_SIZE = sizeof(int);   // The minimum size of a message (id + functional data) is the size of the id alone !

   if( sizeof(T_Start_work_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_Start_work_message);

   return(MAX_SIZE);
}


int compute_max_queue_size_element_for_PI(void)
{
   int MAX_SIZE = sizeof(int);   // The minimum size of a message (id + functional data) is the size of the id alone !

   if( sizeof(T_dHeight_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_dHeight_message);

   if( sizeof(T_Thrust_Update_message) > MAX_SIZE )
      MAX_SIZE = sizeof(T_Thrust_Update_message);

   return(MAX_SIZE);
}


void ground_startup(void)
{
   int res_RI = 0;
   int res_PI = 0;
   int msgsize_max = 8192;
   FILE *f = fopen("/proc/sys/fs/mqueue/msgsize_max", "r");
   fscanf(f, "%d", &msgsize_max);

    if (sizeof(T_Thrust_Update_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (Thrust_Update) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_Thrust_Update_message), msgsize_max, sizeof(T_Thrust_Update_message));
        exit(1);
    }

    if (sizeof(T_Start_work_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (Start_work) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_Start_work_message), msgsize_max, sizeof(T_Start_work_message));
        exit(1);
    }

    if (sizeof(T_dHeight_message) > msgsize_max) {
        printf("[ERROR] The GUI is passing a message (dHeight) which parameter size (%d) exceeds your system limit (%d).\nYou can extend this limit by running: \n    echo NUMBER | sudo tee /proc/sys/fs/mqueue/msgsize_max  # ...with NUMBER > %d\nYou can also make it permanent (check TASTE wiki)\n\n", sizeof(T_dHeight_message), msgsize_max, sizeof(T_dHeight_message));
        exit(1);
    }

   ground_RI_max_msg_size = compute_max_queue_size_element_for_RI();

   {
    char *gui_queue_name = NULL;
    int  len = snprintf (gui_queue_name, 0, "%d_ground_RI_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_ground_RI_queue", geteuid());

       create_exchange_queue(gui_queue_name, 5, ground_RI_max_msg_size, &ground_RI_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
   }
   ground_PI_max_msg_size = compute_max_queue_size_element_for_PI();

   {
    char *gui_queue_name = NULL;
    int  len = snprintf (gui_queue_name, 0, "%d_ground_PI_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_ground_PI_queue", geteuid());

       create_exchange_queue(gui_queue_name, 15, ground_PI_max_msg_size, &ground_PI_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
    len = snprintf (gui_queue_name, 0, "%d_ground_PI_Python_queue", geteuid());
    gui_queue_name = (char *) malloc ((size_t) len + 1);
    if (NULL != gui_queue_name) {
       snprintf (gui_queue_name, len + 1, "%d_ground_PI_Python_queue", geteuid());

       /* Extra queue for the TM sent to the Python mappers */
       create_exchange_queue(gui_queue_name, 15, ground_PI_max_msg_size, &ground_PI_Python_queue_id);

       free (gui_queue_name);
       gui_queue_name = NULL;
    }
   }
}

