#ifndef _QUEUE_UTILITIES_H
#define _QUEUE_UTILITIES_H

/* Written by Cyril Colombo, 2006 */

#ifdef __cplusplus
extern "C" {
#endif

#include <mqueue.h>	//Includes POSIX queue management system, see http://www.opengroup.org/

#include "timeInMS.h"

//
//This package allows to wrap POSIX management queues for the need of
//message passing in the frame of GUI management in the frae of the ASSERT
//project.
//
//Basically, this package allows :
// - To create a queue given caracteristics wanted for this queue, mainly
//   its size. The queue can contain any type of data provided the biggest
//   element size to be stored in the queue is properly provided at creation.
//   e.g. : The queue may be used to store integers, floats and even structures. 
//          The maximum element size to be provided at creation of the queue will
//          then be the size of the biggest type to be handled by the queue.
//   The other size parameter (max_msg_nubmer) detemrnines the number of message
//   to be handled.
//
//Warning : Storing a pointer in the queue may be dangerous, because nothing
//          assure for sure that the adresse will reference the same data area
//          on both the consumer and producer side.
//
// - To read and write elements inside the queue. Note that it is forseen that
//   messages to be exchanged shall be some records, whose first field in an 
//   enumerated type (int) to be used as a dsicriminant for the rest of the 
//   message (functional part of the massage, that could be a structure of 
//   the usefull fonctional data).
//
// - To delete an existing queue.
//



//
// Exported function declaration
//
//This function creates a queue for message sharing  
//
// queue_name 		: [in] Name of the queue to be created 
// max_msg_nubmer 	: [in] Maximum number of messages to be put in the queue 
// max_msg_size 	: [in] Maximum message size. Message can be of different type, so  
// 			       this corresponds to the size of the biggest message type 
// p_queue_id 		: [out] Pointer on a message queue handling structure
// 
// Returns 		: 0 on success, -1 otherwise 
//
int create_exchange_queue(char* queue_name, long max_msg_nubmer, long max_msg_size, mqd_t* p_queue_id);



//
//This function retrieves a single message from a queue create_exchange_queue
//
// queue_id 		: [in] Handle to the queue adressed as returned by  
// max_message_length 	: [in] Maximum size of an element to be stored in the queue 
//                             (functional data plus discriminant) in bytes
// message_data_recieved: [out] Pointer on the functional data retrieved in the queue
//                              Note that this buffer only contains the functional part
//                              of the message and not the first field allowing to identify
//				the message type.                                  
// message_recieved_type: [out] Identifier of the type of message recieved. 
// 
// Returns 		: 0 on success, -1 otherwise 
//
int retrieve_message_from_queue(mqd_t queue_id, long max_message_length, void* message_data_recieved, int* message_recieved_type);



//
//This function writes a single message from a queue create_exchange_queue
//
// queue_id 		: [in] Handle to the queue adressed as returned by  
// message_data_length 	: [in] Size of the functional data (ie. without discriminant) to be written in bytes 
// message_data_sent 	: [in] Pointer on the functional data to be written in the queue
//                             Note that this buffer only contains the functional part
//                             of the message and not the first field allowing to identify
//			       the message type.                                  
// message_recieved_type: [in] Identifier of the type of message to be sent
// 
// Returns 		: 0 on success, -1 otherwise 
//
int write_message_to_queue(mqd_t queue_id, long message_data_length, void* message_data_sent, int message_sent_type);



//
//This function destroy an existing exchange queue 
//
// queue_name 		: [in]  Name of the queue to be created 
// queue_id 		: [out] Pointer on the handle to the queue adressed as opened by oSpen_exchange_queue_for_reading
// Returns 		: 0 on success, -1 otherwise 
//
int open_exchange_queue_for_reading(char* queue_name, mqd_t* queue_id);
int open_exchange_queue_for_writing(char* queue_name, mqd_t* queue_id);


//
//This function destroy an existing exchange queue 
//
// queue_id 		: [in] Handle to the queue adressed as returned by create_exchange_queue 
// queue_name 		: [in] Name of the queue to be created 
// 
// Returns 		: 0 on success, -1 otherwise 
//
int delete_exchange_queue(mqd_t queue_id, char* queue_name);

#ifdef __cplusplus
}
#endif

#endif
