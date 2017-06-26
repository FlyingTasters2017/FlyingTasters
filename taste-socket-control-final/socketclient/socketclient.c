
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
#include <math.h>

// global variables start

#define NUMBER_OF_DRONES 3
#define BUFFER_SIZE 1024

char droneRed[15] = "radio://0/83/2M";
char droneBlue[15] = "radio://0/82/2M";
char droneYellow[15] = "radio://0/84/2M";

int portno = 50012;
int sockfd;
int num;
int time_count;
char droneref[BUFFER_SIZE];
float x_pos[NUMBER_OF_DRONES], y_pos[NUMBER_OF_DRONES], x_ref[NUMBER_OF_DRONES], y_ref[NUMBER_OF_DRONES];

int ii_1 =1, ii_2=1, ii_3 =1;
FILE *Data_pointer; 



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


asn1SccMyPositionData currPosition, refPosition, currPosition2, refPosition2, currPosition3, refPosition3;
asn1SccMyPositionControlData currDronePosition, currDronePosition2, currDronePosition3, refDronePosition, refDronePosition2, refDronePosition3;
asn1SccMyDroneData currDroneCmd, currDroneCmd2, currDroneCmd3;
asn1SccMySensorData currSensor, currSensor2, currSensor3;
asn1SccMyReal currHeight;

//global variables end*/
static int jsoneq(const char *json, jsmntok_t *tok, const char *s) {
  if (tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start &&
      strncmp(json + tok->start, s, tok->end - tok->start) == 0) {
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
int initializeTCPSocketToServer( int port){

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
     bcopy((char *)server->h_addr,     (char *)&serv_addr.sin_addr.s_addr,     server->h_length);

     /* htons() converts the port number to network byte order */
     serv_addr.sin_port = htons(port);
     /* This actually establishes the connection with the server.  Once this done we can send bytes back and forth. */
     if (connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
         error("ERROR connecting");

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

int integerSize(int num)
{
    if (num>0)
    {
        return floor(log10(abs(num))) + 1;
    }
    else if(num <0){
    
        return floor(log10(abs(num))) + 2;
    }
    else
    {
    
        return 1;
    }
    
    
}



void socketclient_startup()    
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */    

    sockfd = initializeTCPSocketToServer(portno);
    Data_pointer = fopen("Data2.m", "w");

    
}

void socketclient_PI_readStabilizerSendThrust(const asn1SccMyDroneData *IN_droneData, const asn1SccMyPositionData *IN_procpositionData, asn1SccMySensorData *OUT_sensorData)
{
    
    char buf[BUFFER_SIZE]; 
    awaitResponse(sockfd, buf, BUFFER_SIZE);
//     printf("Drones sensor data from Python Socket server : %s\n", buf);
    printf("Start drone parsing\n");
    printf("\n");
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
	for(i = 0; i < r; i++){
        if (jsoneq(buf, &t[i], "drone") == 0) {
            bzero(droneSensorJSON[numberOfConnectedDrone],BUFFER_SIZE);
            strncpy(droneSensorJSON[numberOfConnectedDrone], buf + t[i+1].start, t[i+1].end-t[i+1].start);
            printf("Drone NUMBER: %d\n", numberOfConnectedDrone);
            printf("Drone sensor: %s\n", droneSensorJSON[numberOfConnectedDrone]);
            numberOfConnectedDrone++;
        }
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
                printf("pitch is %f \n", strtod(temp, &ptr));
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
                printf("zRange is %f \n", strtod(temp, &ptr));
                i++;
            }
            else if (jsoneq(buf, &t[i], "uri") == 0) {
                strncpy(droneSensor[j].uri, buf + t[i+1].start, t[i+1].end-t[i+1].start);
                printf("uri is %s \n", droneSensor[j].uri);
                i++;
            }
            else {
                printf("Unexpected key: %.*s\n", t[i].end-t[i].start,buf + t[i].start);
            }
        }
    }
    printf("\n");

  //TODO: Controller for the drone. Put here
//     socketclient_RI_getPosition(&currHeight,&currPosition);
//     x_pos = currPosition.xAct;
//     y_pos = currPosition.yAct;
//     
    
    x_pos[0] = IN_procpositionData->x0Act;
    y_pos[0] = IN_procpositionData->y0Act;
    
    x_pos[1] = IN_procpositionData->x1Act;
    y_pos[1] = IN_procpositionData->y1Act;
    
    x_pos[2] = IN_procpositionData->x2Act;
    y_pos[2] = IN_procpositionData->y2Act;
    
//     printf("Red x position: %f y position: %f \n", x_pos[0], y_pos[0]);
//     printf("Blue x position: %f y position: %f \n", x_pos[1], y_pos[1]);
//     printf("Yellow x position: %f y position: %f \n", x_pos[2], y_pos[2]);
    
    currPosition.x0Act = x_pos[0];
    currPosition.y0Act = y_pos[0];
    currPosition.x1Act = x_pos[1];
    currPosition.y1Act = y_pos[1];
    currPosition.x1Act = x_pos[2];
    currPosition.y1Act = y_pos[2];
    
    
    
//     x_ref = refPosition.xAct;
//     y_ref = refPosition.yAct;
//     printf("x reference position: %f y reference position: %f \n", x_ref, y_ref);
    
      
    
    socketclient_RI_getReference(&currPosition,&refPosition);
    
//     printf("Red Reference x position: %f y position: %f \n", x_pos[0], y_pos[0]);
//     printf("Blue x position: %f y position: %f \n", x_pos[1], y_pos[1]);
//     printf("Yellow x position: %f y position: %f \n", x_pos[2], y_pos[2]);
    
    x_ref[0] = refPosition.x0Act;
    y_ref[0] = refPosition.y0Act;
    x_ref[1] = refPosition.x1Act;
    y_ref[1] = refPosition.y1Act;
    x_ref[2] = refPosition.x2Act;
    y_ref[2] = refPosition.y2Act;
    
    
//     x_ref[0] = 0.4;
//     y_ref[0] = 0.4;
//     x_ref[1] = 0.4;
//     y_ref[1] = -0.4;
//     x_ref[2] = -0.4;
//     y_ref[2] = -0.4;
    
//     strcpy(droneBlue, "radio://0/82/2M");
//     strcpy(droneRed, "radio://0/83/2M");
//     strcpy(droneYellow, "radio://0/84/2M");
    

    
//     printf("droneRed %s\n", droneRed);
//     printf("droneBlue %s\n", droneBlue);
//     printf("droneYellow %s\n", droneYellow);
//     
//     printf("droneSensor0 = %c\n", droneSensor[0].uri[11]);
//     printf("droneSensor1 = %c\n", droneSensor[1].uri[11]);
//     printf("droneSensor2 = %c\n", droneSensor[2].uri[11]);
    
    
  
    
    
    
    
    
//     printf("x reference position: %f y reference position: %f \n", refPosition.xAct, refPosition.yAct);
//     refPosition.xAct = -0.5;
//     refPosition.yAct = 0.0;
    
    for(i = 0;i<numberOfConnectedDrone;i++)
    {
    
        
        
        if (strcmp(droneSensor[i].uri, droneYellow)==0) //Yellow Marker
        {
            currSensor3.yawAct = droneSensor[i].yaw;
            currSensor3.pitchAct = droneSensor[i].pitch;
            currSensor3.rollAct = droneSensor[i].roll;
            currSensor3.accxAct = 0.0;
            currSensor3.accyAct = 0.0;
            currSensor3.acczAct = 0.0;
            currSensor3.baropAct = droneSensor[i].zRange;
            
            currDronePosition3.xAct = x_pos[2];
            currDronePosition3.yAct = y_pos[2];
        
            refDronePosition3.xAct = x_ref[2];
            refDronePosition3.yAct = y_ref[2]; 
            
            socketclient_RI_controlAction3(&currDronePosition3,&currSensor3,&refDronePosition3,&currDroneCmd3);
        
            droneSensor[i].yawCmd = 1000*currDroneCmd3.yawrateRef;
            droneSensor[i].pitchCmd = 1000*currDroneCmd3.pitchRef;
            droneSensor[i].rollCmd = 1000*currDroneCmd3.rollRef;
            droneSensor[i].zRangeCmd = 1000*currDroneCmd3.thrustRef;
            
            printf("Current drone: %s \n",droneSensor[i].uri);
            printf("Current position: x =  %f y = %f \n", currDronePosition3.xAct, currDronePosition3.yAct);
            printf("Reference position: %f y position: %f \n", refDronePosition3.xAct, refDronePosition3.yAct);
            
                    // Write to txt file ......................................................................
            Data_pointer = fopen("Data2.m", "a");    
            fprintf(Data_pointer, "currPosition3.xAct(%d)= %f;\n",ii_3,currDronePosition3.xAct);
            fprintf(Data_pointer, "currPosition3.yAct(%d)= %f;\n",ii_3,currDronePosition3.yAct);
            fprintf(Data_pointer, "currSensor3.yawAct(%d)= %f;\n",ii_3,currSensor3.yawAct);
            fprintf(Data_pointer, "currSensor3.pitchAct(%d)= %f;\n",ii_3,currSensor3.pitchAct);
            fprintf(Data_pointer, "currSensor3.rollAct(%d)= %f;\n",ii_3,currSensor3.rollAct);
            fprintf(Data_pointer, "currSensor3.accxAct(%d)= %f;\n",ii_3,currSensor3.accxAct);
            fprintf(Data_pointer, "currSensor3.accyAct(%d)= %f;\n",ii_3,currSensor3.accyAct);
            fprintf(Data_pointer, "currSensor3.acczAct(%d)= %f;\n",ii_3,currSensor3.acczAct);
            fprintf(Data_pointer, "currSensor3.baropAct(%d)= %f;\n",ii_3,currSensor3.baropAct);
            fprintf(Data_pointer, "refPosition3.xAct(%d)= %f;\n",ii_3,refDronePosition3.xAct);
            fprintf(Data_pointer, "refPosition3.yAct(%d)= %f;\n",ii_3,refDronePosition3.yAct);
            fprintf(Data_pointer, "currDroneCmd3.yawrateRef(%d)= %f;\n",ii_3,currDroneCmd3.yawrateRef);
            fprintf(Data_pointer, "currDroneCmd3.pitchRef(%d)= %f;\n",ii_3,currDroneCmd3.pitchRef);
            fprintf(Data_pointer, "currDroneCmd3.rollRef(%d)= %f;\n",ii_3,currDroneCmd3.rollRef);
            fprintf(Data_pointer, "currDroneCmd3.thrustRef(%d)= %f;\n",ii_3,currDroneCmd3.thrustRef);
            ii_3 = ii_3 + 1;
     
            fclose(Data_pointer); 
//.........................................................................................  
    
            
        }
        else if (strcmp(droneSensor[i].uri,droneBlue)==0) //Blue Marker
            {
            currSensor2.yawAct = droneSensor[i].yaw;
            currSensor2.pitchAct = droneSensor[i].pitch;
            currSensor2.rollAct = droneSensor[i].roll;
            currSensor2.accxAct = 0.0;
            currSensor2.accyAct = 0.0;
            currSensor2.acczAct = 0.0;
            currSensor2.baropAct = droneSensor[i].zRange;
        
            currDronePosition2.xAct = x_pos[1];
            currDronePosition2.yAct = y_pos[1];
        
            refDronePosition2.xAct = x_ref[1];
            refDronePosition2.yAct = y_ref[1]; 
            
            socketclient_RI_controlAction2(&currDronePosition2,&currSensor2,&refDronePosition2,&currDroneCmd2);
        
            droneSensor[i].yawCmd = 1000*currDroneCmd2.yawrateRef;
            droneSensor[i].pitchCmd = 1000*currDroneCmd2.pitchRef;
            droneSensor[i].rollCmd = 1000*currDroneCmd2.rollRef;
            droneSensor[i].zRangeCmd = 1000*currDroneCmd2.thrustRef;
            
            printf("Current drone: %s \n",droneSensor[i].uri);
            printf("Current position: x =  %f y = %f \n", currDronePosition2.xAct, currDronePosition2.yAct);
            printf("Reference position: %f y position: %f \n", refDronePosition2.xAct, refDronePosition2.yAct);
            
            
            // Write to txt file ......................................................................
            Data_pointer = fopen("Data2.m", "a");    
            fprintf(Data_pointer, "currPosition2.xAct(%d)= %f;\n",ii_2,currDronePosition2.xAct);
            fprintf(Data_pointer, "currPosition2.yAct(%d)= %f;\n",ii_2,currDronePosition2.yAct);
            fprintf(Data_pointer, "currSensor2.yawAct(%d)= %f;\n",ii_2,currSensor2.yawAct);
            fprintf(Data_pointer, "currSensor2.pitchAct(%d)= %f;\n",ii_2,currSensor2.pitchAct);
            fprintf(Data_pointer, "currSensor2.rollAct(%d)= %f;\n",ii_2,currSensor2.rollAct);
            fprintf(Data_pointer, "currSensor2.accxAct(%d)= %f;\n",ii_2,currSensor2.accxAct);
            fprintf(Data_pointer, "currSensor2.accyAct(%d)= %f;\n",ii_2,currSensor2.accyAct);
            fprintf(Data_pointer, "currSensor2.acczAct(%d)= %f;\n",ii_2,currSensor2.acczAct);
            fprintf(Data_pointer, "currSensor2.baropAct(%d)= %f;\n",ii_2,currSensor2.baropAct);
            fprintf(Data_pointer, "refPosition2.xAct(%d)= %f;\n",ii_2,refDronePosition2.xAct);
            fprintf(Data_pointer, "refPosition2.yAct(%d)= %f;\n",ii_2,refDronePosition2.yAct);
            fprintf(Data_pointer, "currDroneCmd2.yawrateRef(%d)= %f;\n",ii_2,currDroneCmd2.yawrateRef);
            fprintf(Data_pointer, "currDroneCmd2.pitchRef(%d)= %f;\n",ii_2,currDroneCmd2.pitchRef);
            fprintf(Data_pointer, "currDroneCmd2.rollRef(%d)= %f;\n",ii_2,currDroneCmd2.rollRef);
            fprintf(Data_pointer, "currDroneCmd2.thrustRef(%d)= %f;\n",ii_2,currDroneCmd2.thrustRef);
            ii_2 = ii_2 + 1;
     
            fclose(Data_pointer); 
        }
        else // Red Marker
            {
            currSensor.yawAct = droneSensor[i].yaw;
            currSensor.pitchAct = droneSensor[i].pitch;
            currSensor.rollAct = droneSensor[i].roll;
            currSensor.accxAct = 0.0;
            currSensor.accyAct = 0.0;
            currSensor.acczAct = 0.0;
            currSensor.baropAct = droneSensor[i].zRange;
        
            currDronePosition.xAct = x_pos[0];
            currDronePosition.yAct = y_pos[0];
        
            refDronePosition.xAct = x_ref[0];
            refDronePosition.yAct = y_ref[0]; 
            
            socketclient_RI_controlAction(&currDronePosition,&currSensor,&refDronePosition,&currDroneCmd);
        
            droneSensor[i].yawCmd = 1000*currDroneCmd.yawrateRef;
            droneSensor[i].pitchCmd = 1000*currDroneCmd.pitchRef;
            droneSensor[i].rollCmd = 1000*currDroneCmd.rollRef;
            droneSensor[i].zRangeCmd = 1000*currDroneCmd.thrustRef;
            
            printf("Current drone: %s \n",droneSensor[i].uri);
            printf("Current position: x =  %f y = %f \n", currDronePosition.xAct, currDronePosition.yAct);
            printf("Reference position: %f y position: %f \n", refDronePosition.xAct, refDronePosition.yAct);
            
            
            // Write to txt file ......................................................................
            Data_pointer = fopen("Data2.m", "a");    
            fprintf(Data_pointer, "currPosition.xAct(%d)= %f;\n",ii_1,currDronePosition.xAct);
            fprintf(Data_pointer, "currPosition.yAct(%d)= %f;\n",ii_1,currDronePosition.yAct);
            fprintf(Data_pointer, "currSensor.yawAct(%d)= %f;\n",ii_1,currSensor.yawAct);
            fprintf(Data_pointer, "currSensor.pitchAct(%d)= %f;\n",ii_1,currSensor.pitchAct);
            fprintf(Data_pointer, "currSensor.rollAct(%d)= %f;\n",ii_1,currSensor.rollAct);
            fprintf(Data_pointer, "currSensor.accxAct(%d)= %f;\n",ii_1,currSensor.accxAct);
            fprintf(Data_pointer, "currSensor.accyAct(%d)= %f;\n",ii_1,currSensor.accyAct);
            fprintf(Data_pointer, "currSensor.acczAct(%d)= %f;\n",ii_1,currSensor.acczAct);
            fprintf(Data_pointer, "currSensor.baropAct(%d)= %f;\n",ii_1,currSensor.baropAct);
            fprintf(Data_pointer, "refPosition.xAct(%d)= %f;\n",ii_1,refDronePosition.xAct);
            fprintf(Data_pointer, "refPosition.yAct(%d)= %f;\n",ii_1,refDronePosition.yAct);
            fprintf(Data_pointer, "currDroneCmd.yawrateRef(%d)= %f;\n",ii_1,currDroneCmd.yawrateRef);
            fprintf(Data_pointer, "currDroneCmd.pitchRef(%d)= %f;\n",ii_1,currDroneCmd.pitchRef);
            fprintf(Data_pointer, "currDroneCmd.rollRef(%d)= %f;\n",ii_1,currDroneCmd.rollRef);
            fprintf(Data_pointer, "currDroneCmd.thrustRef(%d)= %f;\n",ii_1,currDroneCmd.thrustRef);
            ii_1 = ii_1 + 1;
     
            fclose(Data_pointer); 
        }
        
        
        

//         socketclient_RI_controlAction(&currDronePosition,&currSensor,&refDronePosition,&currDroneCmd);
//         
//         droneSensor[i].yawCmd = 1000*currDroneCmd.yawrateRef;
//         droneSensor[i].pitchCmd = 1000*currDroneCmd.pitchRef;
//         droneSensor[i].rollCmd = 1000*currDroneCmd.rollRef;
//         droneSensor[i].zRangeCmd = 1000*currDroneCmd.thrustRef;
//         
//         printf("yawrate Ref: %d\t", droneSensor[i].yawCmd);
//         printf("pitch Ref: %d\t", droneSensor[i].pitchCmd);
//         printf("roll Ref: %d\t", droneSensor[i].rollCmd);
//         printf("z Ref: %d\t", droneSensor[i].zRangeCmd);
        
        
    }
    
//     for(i = 0;i<numberOfConnectedDrone;i++)
//     {
//     
//         currSensor.yawAct = droneSensor[i].yaw;
//         currSensor.pitchAct = droneSensor[i].pitch;
//         currSensor.rollAct = droneSensor[i].roll;
//         currSensor.accxAct = 0.0;
//         currSensor.accyAct = 0.0;
//         currSensor.acczAct = 0.0;
//         currSensor.baropAct = droneSensor[i].zRange;
//         
//         if (strcmp(droneSensor[i].uri, droneYellow)==0) //Yellow Marker
//         {
//             printf("droneYellow after strcmp %s\n", droneYellow);
//             currDronePosition.xAct = x_pos[2];
//             currDronePosition.yAct = y_pos[2];
//         
//             refDronePosition.xAct = x_ref[2];
//             refDronePosition.yAct = y_ref[2]; 
//         }
//         else if (strcmp(droneSensor[i].uri,droneBlue)==0) //Blue Marker
//             {
//         
//             currDronePosition.xAct = x_pos[1];
//             currDronePosition.yAct = y_pos[1];
//         
//             refDronePosition.xAct = x_ref[1];
//             refDronePosition.yAct = y_ref[1]; 
//         }
//         else // Red Marker
//             {
//         
//             currDronePosition.xAct = x_pos[0];
//             currDronePosition.yAct = y_pos[0];
//         
//             refDronePosition.xAct = x_ref[0];
//             refDronePosition.yAct = y_ref[0]; 
//         }
//         
//         printf("Current drone: %s \n",droneSensor[i].uri);
//         printf("Current position: x =  %f y = %f \n", currDronePosition.xAct, currDronePosition.yAct);
//         printf("Reference position: %f y position: %f \n", refDronePosition.xAct, refDronePosition.yAct);
//         
// 
//         socketclient_RI_controlAction(&currDronePosition,&currSensor,&refDronePosition,&currDroneCmd);
//         
//         droneSensor[i].yawCmd = 1000*currDroneCmd.yawrateRef;
//         droneSensor[i].pitchCmd = 1000*currDroneCmd.pitchRef;
//         droneSensor[i].rollCmd = 1000*currDroneCmd.rollRef;
//         droneSensor[i].zRangeCmd = 1000*currDroneCmd.thrustRef;
//         
//         printf("yawrate Ref: %d\t", droneSensor[i].yawCmd);
//         printf("pitch Ref: %d\t", droneSensor[i].pitchCmd);
//         printf("roll Ref: %d\t", droneSensor[i].rollCmd);
//         printf("z Ref: %d\t", droneSensor[i].zRangeCmd);
//         
//         
//     }
    
    
    
    
//     currPosition.x0Act = x_pos[1];
//     currPosition.y0Act = y_pos[1];
// 
//     
//     
//     printf("yawrate Ref: %f", currDroneRef.yawrateRef);
//     printf("pitch Ref: %f", currDroneRef.pitchRef);
//     printf("roll Ref: %f", currDroneRef.rollRef);
//     printf("z Ref: %f", currDroneRef.thrustRef);
//     
//     
// 
//     
//   
//   
//   
//    printf("Sending to Python server: \n");
//    int thrust, roll, pitch, yawrate;
//    char *thrustc;
//    char *rollc;
//    char *yawratec;
//    char *pitchc;
//    
//    thrust = htonl(1000*currDroneRef.thrustRef);
//    yawrate = htonl(1000*currDroneRef.yawrateRef);
//    roll = htonl(1000*(currDroneRef.rollRef));
//    pitch = htonl(1000*(currDroneRef.pitchRef));
   
   
//--------------SEND MULTIPLE DRONE add------------------
   
//    droneSensor[0].yawCmd = 10;
//    droneSensor[0].pitchCmd = 11;
//    droneSensor[0].rollCmd = 12;
//    droneSensor[0].zRangeCmd = 10000;
//    droneSensor[1].zRangeCmd = 20000;
//    
//    printf("droneSensor[0].zRangeCmd %d\n", droneSensor[0].zRangeCmd);
   
   char *main_buff = malloc(sizeof(char)*BUFFER_SIZE);
   bzero(main_buff,BUFFER_SIZE);

   
    strcat(main_buff, "{");
    for (int i=0; i<numberOfConnectedDrone; i++){
        int size_buff = strlen(droneSensor[i].uri) +  integerSize(droneSensor[i].zRangeCmd) +integerSize(droneSensor[i].yawCmd) + integerSize(droneSensor[i].pitchCmd) +integerSize(droneSensor[i].rollCmd);
//         printf("size of uri: %d",strlen(droneSensor[i].uri));
//         printf("size of temp dynamic buffer: %d",size_buff);
        int tmp_key_size = strlen("{'uri':'','thrust':,'yaw':,'pitch':,'roll':}");
//         printf("size of temp static buffer: %d",tmp_key_size);
        int tmp_total_size = size_buff + tmp_key_size +1;
//         printf("size of temp total buffer: %d",tmp_total_size);
        char tmp_buf[tmp_total_size];
        bzero(tmp_buf,tmp_total_size);

        snprintf(tmp_buf, tmp_total_size, "{'uri':'%s','thrust':%d,'yaw':%d,'pitch':%d,'roll':%d}", droneSensor[i].uri, droneSensor[i].zRangeCmd, droneSensor[i].yawCmd, droneSensor[i].pitchCmd, droneSensor[i].rollCmd);
//         printf("%s\n", tmp_buf);
        strcat(main_buff, tmp_buf);
        if(i != numberOfConnectedDrone - 1){
            strcat(main_buff, ",");}
        printf("%s\n", main_buff);
    }
    strcat(main_buff, "}");
    strcat(main_buff, "ESA");

   
   //------------END SEND MULTIPLE DRONE add--------------------
   
   
  // bzero(droneref,BUFFER_SIZE);   
  // snprintf(droneref, sizeof( droneref ), "%d %d %d %d ", yawrate, pitch, roll, thrust);

    sendRequest(sockfd, main_buff);  
    free(main_buff);    
}

