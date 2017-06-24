
/* User code: This file will not be overwritten by TASTE. */
#include "socketclient.h"
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include "jsmn.h"
#include <time.h>

#define NUMBER_OF_DRONES 3
#define BUFFER_SIZE 1024

//global variables declaration start
//char *buffer;
//char *buf;

int portno = 50012;
int sockfd;
int time_count;
char droneref[BUFFER_SIZE];
float x_pos, y_pos;

struct droneSensorData {
    char uri[20];
    float yaw;
    float pitch;
    float roll;
    float zRange;
    int x;
    int y;
    int yawCmd;
    int pitchCmd;
    int rollCmd;
    int zRangeCmd;
} droneSensor[NUMBER_OF_DRONES];

asn1SccMyPositionData currPosition;
asn1SccMyDroneData currDroneRef;
asn1SccMySensorData currSensor;
asn1SccMyReal currHeight;

//global variables end

static int jsoneq(const char *json, jsmntok_t *tok, const char *s) {
    if (tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start && strncmp(json + tok->start, s, tok->end - tok->start) == 0)
    {
        return 0;
    }
    return -1;
}

/* A sort-of graceful error handler */
void error(char *msg){
     perror(msg);
     exit(0);
}

 /*
 *  This function does everything we need to have an open socket to the web
 *  server on the personal server.  There is nothing bluetooth specific here,
 *  the same code will connect to any server.
 *  It is missing robust error handling, but it should catch most errors and
 *  exit gracefully.
 *  This code is a modified version of the example in socket tutorial at
 *  http://www.cs.rpi.edu/courses/sysprog/sockets/sock.html
 *  Look there for a more detailed explanation of what is going on.
 *
 */
int initializeTCPSocketToServer( int port)
{    
    struct sockaddr_in serv_addr;
    struct hostent *server;
    /* Create a socket */
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        error("ERROR opening socket");
     
    // to reuse the port number start
    int optval = 1;
    setsockopt(sockfd, SOL_SOCKET, SO_REUSEPORT, &optval, sizeof(optval));
    // to reuse the port number end

    /* Do a DNS lookup to find the server's address. The call returns a  struct with information about the server */
    server = gethostbyname("127.0.0.1");
    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }

    /* Set up the address structure to tell the socket what to connect to. */
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);

    /* htons() converts the port number to network byte order */
    serv_addr.sin_port = htons(port);
    /* This actually establishes the connection with the server.  Once this done we can send bytes back and forth. */
    if (connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
        error("ERROR connecting");     
    printf("end - initialization\n");
    return sockfd;
}

 /*
 * These two function just write and read from the socket.  These
 * implementations are 'bare-bones' in that they don't check to see if
 * everything was read and don't don good error-checking.  In practice multiple
 * reads maybe needed to get the entire response.  Doing all of this 'the right
 * way' is left as an excercise.
 */
void sendRequest(int sockfd, char *droneref[BUFFER_SIZE])
{
    int n;
    n = write(sockfd,droneref,BUFFER_SIZE);
    if (n < 0)
        error("ERROR writing to socket");    
}
    
void awaitResponse(int sockfd, char *buf, int len)
{
    int n;
    bzero(buf,BUFFER_SIZE);
    n = read(sockfd,buf,len);
    if (n < 0)
        error("ERROR reading from socket");
}


void socketclient_startup()    
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */    
    sockfd = initializeTCPSocketToServer(portno);
}

void socketclient_PI_readStabilizerSendThrust(const asn1SccMyDroneData *IN_droneData, asn1SccMySensorData *OUT_sensorData)
{
    //time_count = clock(); 
    char buf[BUFFER_SIZE];/* = "{\"drone\":{\"stabilizer.roll\": 1.17316307127475739, \"uri\": \"radio://0/82/2M\"},\"drone\":{\"stabilizer.roll\": 2.17316307127475739, \"uri\": \"radio://0/83/2M\"}}";*/
    
    
    awaitResponse(sockfd, buf, BUFFER_SIZE);
    printf("Drones sensor data from Python Socket server : %s\n", buf);
    
    
    printf("Start parsing\n");
    // START CHNGE
    jsmntok_t t[BUFFER_SIZE];   
    jsmn_parser p;
    char droneSensorJSON[NUMBER_OF_DRONES][BUFFER_SIZE];
    
    int i, j, r;
    jsmn_init(&p);
	r = jsmn_parse(&p, buf, strlen(buf), t, sizeof(t)/sizeof(t[0]));
	if (r < 0) {
		printf("Failed to parse JSON: %d\n", r);
		return 1;
	}

	int numberOfConnectedDrone = 0;
	for(i = 0; i < r; i++)
        if (jsoneq(buf, &t[i], "drone") == 0) {
            strncpy(droneSensorJSON[numberOfConnectedDrone], buf + t[i+1].start, t[i+1].end-t[i+1].start);
            printf("Drone NUMBER: %d\n", numberOfConnectedDrone);
            printf("Drone sensor: %s\n", droneSensorJSON[numberOfConnectedDrone]);
            numberOfConnectedDrone++;
        }

    for (j = 0; j < numberOfConnectedDrone; j++) {
        bzero(buf,BUFFER_SIZE);
        strcpy(buf, droneSensorJSON[j]);
        char temp[BUFFER_SIZE];
        char *ptr;
        jsmn_init(&p);
        
        
        
        r = jsmn_parse(&p, buf, strlen(buf), t, sizeof(t)/sizeof(t[0]));
        if (r < 0) {
            printf("Failed to parse JSON: %d\n", r);    
        }
        
        for (i = 1; i < r; i++) {
            if (jsoneq(buf, &t[i], "stabilizer.yaw") == 0) {
                strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                temp[t[i+1].end-t[i+1].start] = '\0';
                //OUT_sensorData->yawAct = strtod(temp, &ptr);
                droneSensor[j].yaw = strtod(temp, &ptr);
                printf("yaw is %f \n", droneSensor[j].yaw);
                i++;
            }         
            else if (jsoneq(buf, &t[i], "stabilizer.pitch") == 0) {
                strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                temp[t[i+1].end-t[i+1].start] = '\0';
                //OUT_sensorData->pitchAct = strtod(temp, &ptr);
                droneSensor[j].pitch = strtod(temp, &ptr);
                //printf("yaw is %f \n", strtod(temp, &ptr));
                i++;
            }
            else if (jsoneq(buf, &t[i], "stabilizer.roll") == 0) {
                strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                temp[t[i+1].end-t[i+1].start] = '\0';
                //OUT_sensorData->rollAct = strtod(temp, &ptr);
                droneSensor[j].roll = strtod(temp, &ptr);
                printf("roll is %f \n", strtod(temp, &ptr));
                i++;
            }   
            /*else if (jsoneq(buf, &t[i], "acc.x") == 0) {
                strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                temp[t[i+1].end-t[i+1].start] = '\0';
                //printf("yaw is %f \n", strtod(temp, &ptr));
                OUT_sensorData->accxAct = strtod(temp, &ptr);
                i++;
            }
            else if (jsoneq(buf, &t[i], "acc.y") == 0) {
                strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                temp[t[i+1].end-t[i+1].start] = '\0';
                //printf("yaw is %f \n", strtod(temp, &ptr));
                OUT_sensorData->accyAct = strtod(temp, &ptr);
                i++;
            }
            else if (jsoneq(buf, &t[i], "acc.z") == 0) {
                strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                temp[t[i+1].end-t[i+1].start] = '\0';
                //printf("yaw is %f \n", strtod(temp, &ptr));
                OUT_sensorData->acczAct = strtod(temp, &ptr);
                i++;
            }*/
            else if (jsoneq(buf, &t[i], "range.zrange") == 0) {
                strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                temp[t[i+1].end-t[i+1].start] = '\0';
                //OUT_sensorData->baropAct = strtod(temp, &ptr);
                droneSensor[j].zRange = strtod(temp, &ptr);
                //printf("yaw is %f \n", strtod(temp, &ptr));
                i++;
            }
            else if (jsoneq(buf, &t[i], "uri") == 0) {
                strncpy(droneSensor[j].uri, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                //temp[t[i+1].end-t[i+1].start] = '\0';
                printf("uri is %s \n", droneSensor[j].uri);
                //OUT_sensorData->baropAct = strtod(temp, &ptr);
                i++;
            }
            else {
                printf("Unexpected key: %.*s\n", t[i].end-t[i].start,buf + t[i].start);
            }
        }
    }

/* //New sensor data came check
    if (receivedYaw != yawOld) {
        yawOld = receivedYaw;
        
    }
    else {
        printf("No new sensor data \n");
        //send old controller command
        
    }
*/

  //TODO: Controller for the drone. Put here
    currHeight = OUT_sensorData->baropAct;
    currSensor.yawAct = OUT_sensorData->yawAct;
    currSensor.pitchAct = OUT_sensorData->yawAct;
    currSensor.rollAct = OUT_sensorData->yawAct;
    currSensor.accxAct = OUT_sensorData->accxAct;
    currSensor.accyAct = OUT_sensorData->accyAct;
    currSensor.acczAct = OUT_sensorData->acczAct;
    currSensor.baropAct = OUT_sensorData->baropAct;
    //socketclient_RI_getPosition(&currHeight,&currPosition);
    
    
    
   // x_pos = currPosition.xAct;
   // y_pos = currPosition.yAct;
    
    //printf("x position: %f y position: %f \n", x_pos, y_pos);
    
   // socketclient_RI_controlAction(&currPosition,&currSensor,&currDroneRef);
    //printf("yawrate Ref: %f", currDroneRef.yawrateRef);
    //printf("pitch Ref: %f", currDroneRef.pitchRef);
    //printf("roll Ref: %f", currDroneRef.rollRef);
    //printf("z Ref: %f", currDroneRef.thrustRef);
    
    
//     if(currDroneRef.yawrateRef < 0)
//     {
//         yrsign = 1;
//         currDroneRef.yawrateRef = -currDroneRef.yawrateRef;
//     }
//     else{
//         yrsign = 0;
//         
//     }
//     
//     if(currDroneRef.pitchRef < 0)
//     {
//         psign = 1;
//         currDroneRef.pitchRef = -currDroneRef.pitchRef;
//     }
//     else{
//         psign = 0;
//         
//     }
//     
//     if(currDroneRef.rollRef < 0)
//     {
//         rsign = 1;
//         currDroneRef.rollRef = -currDroneRef.rollRef;
//     }
//     else{
//         rsign = 0;
//         
//     }
    
  
  
  
   printf("Sending to Python server: \n");
   int thrust, roll, pitch, yawrate;
   char *thrustc;
   char *rollc;
   char *yawratec;
   char *pitchc;
   
   thrust = htonl(1000*currDroneRef.thrustRef);
   yawrate = htonl(1000*currDroneRef.yawrateRef);
   roll = htonl(1000*currDroneRef.rollRef);
   pitch = htonl(1000*currDroneRef.pitchRef);
   
//    yrsign = htonl(yrsign)
   
   //--------------SEND MULTIPLE DRONE add------------------
   
   droneSensor[0].yawCmd = 10;
   droneSensor[0].pitchCmd = 11;
   droneSensor[0].rollCmd = 12;
   droneSensor[0].zRangeCmd = 10000;
   droneSensor[1].zRangeCmd = 20000;
   
   printf("droneSensor[0].zRangeCmd %d\n", droneSensor[0].zRangeCmd);
   
   char *main_buff = malloc(sizeof(char)*BUFFER_SIZE);
   bzero(main_buff,BUFFER_SIZE);

   
    strcat(main_buff, "{");
    for (int i=0; i<numberOfConnectedDrone; i++){
        printf("numberOfConnectedDrone %d\n", numberOfConnectedDrone); 
        int size_buff = strlen(&droneSensor[i].uri) +  sizeof(&droneSensor[i].zRangeCmd) +sizeof(&droneSensor[i].yawCmd) +sizeof(&droneSensor[i].pitchCmd) +sizeof(&droneSensor[i].rollCmd);
        int tmp_key_size = strlen("{'uri':'','thrust':,'yaw':,'pitch':,'roll':}");
        int tmp_total_size = size_buff + tmp_key_size;
        char tmp_buf[tmp_total_size];
        snprintf(tmp_buf, tmp_total_size, "{'uri':'%s','thrust':%d,'yaw':%d,'pitch':%d,'roll':%d}", droneSensor[i].uri, droneSensor[i].zRangeCmd, droneSensor[i].yawCmd, droneSensor[i].pitchCmd, droneSensor[i].rollCmd);
        strcat(main_buff, tmp_buf);
        if(i != numberOfConnectedDrone - 1){
            strcat(main_buff, ",");}
        printf("%s\n", main_buff);
    }
    strcat(main_buff, "}");
    strcat(main_buff, "ESA");

    printf("%s\n", main_buff);

   
   //------------END SEND MULTIPLE DRONE add--------------------
   
   
  // bzero(droneref,BUFFER_SIZE);   
  // snprintf(droneref, sizeof( droneref ), "%d %d %d %d ", yawrate, pitch, roll, thrust);
   
    printf("setpoint for the drone: main_buff \n%s\n",main_buff);
    sendRequest(sockfd, main_buff);  
    free(main_buff);
}

