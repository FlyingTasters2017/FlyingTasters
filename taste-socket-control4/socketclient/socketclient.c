
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

// global variables start
char *buffer;
char *buf;

int portno = 50007;
int sockfd;
int n;
int time_count;
char droneref[256];

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
    
    printf("start - initialization\n");

     //int sockfd;
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
void sendRequest(int sockfd, char *droneref[256])
{
    n = write(sockfd,droneref,256);
    if (n < 0)
        error("ERROR writing to socket");    
}
    
void awaitResponse(int sockfd, char *buf, int len)
{
    bzero(buf,256);
    n = read(sockfd,buf,len);
    if (n < 0)
        error("ERROR reading from socket");
}


void socketclient_startup()    
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */    
    printf("initialization started\n");
    sockfd = initializeTCPSocketToServer(portno);
    printf("initialization ended\n");
}

void socketclient_PI_readStabilizerSendThrust(const asn1SccMyDroneData *IN_droneData, asn1SccMySensorData *OUT_sensorData)
{
    time_count = clock(); 
   char buf[256]; 
   int n;
   awaitResponse(sockfd, buf, 255);
    printf("response from Python Socket server : %s\n",buf);
    int i, r;
    char temp[512];
    char *ptr;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */
  jsmn_init(&p);
  r = jsmn_parse(&p, buf, strlen(buf), t, sizeof(t)/sizeof(t[0]));
  if (r < 0) {
    printf("Failed to parse JSON: %d\n", r);    
  }
  /* Assume the top-level element is an object */
  if (r < 1 || t[0].type != JSMN_OBJECT) {
    printf("Object expected\n");
    
  }

  int yaw, pitch, roll, zrange;
  int yawOld, pitchOld, rollOld, zrangeOld;
  
  /* Loop over all keys of the root object */
  for (i = 1; i < r; i++) {
        if (jsoneq(buf, &t[i], "stabilizer.yaw") == 0) {
      /* We may use strndup() to fetch string value socketShutdownError*/
//       printf("stabilizer.yaw: %.*s\n", t[i+1].end-t[i+1].start,buf + t[i+1].start);
            strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            OUT_sensorData->yawAct = strtod(temp, &ptr);
            yaw = strtod(temp, &ptr) * 1000;
            i++;
    }         
    else if (jsoneq(buf, &t[i], "stabilizer.pitch") == 0) {
      /* We may additionally check if the value is either "true" or "false" */
//       printf("stabilizer.pitch: %.*s\n", t[i+1].end-t[i+1].start,buf + t[i+1].start);
            strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->pitchAct = strtod(temp, &ptr);
      i++;
    }
    else if (jsoneq(buf, &t[i], "stabilizer.roll") == 0) {
      /* We may want to do strtol() here to get numeric value */
//       printf("stabilizer.roll: %.*s\n", t[i+1].end-t[i+1].start,buf + t[i+1].start);
            strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->rollAct = strtod(temp, &ptr);
      i++;
    }   
    else if (jsoneq(buf, &t[i], "acc.x") == 0) {
      /* We may additionally check if the value is either "true" or "false" */
//       printf("acc.x: %.*s\n", t[i+1].end-t[i+1].start,
//           buf + t[i+1].start);
            strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->accxAct = strtod(temp, &ptr);
      i++;
    }
    else if (jsoneq(buf, &t[i], "acc.y") == 0) {
      /* We may want to do strtol() here to get numeric value */
//       printf("acc.y: %.*s\n", t[i+1].end-t[i+1].start,
//           buf + t[i+1].start);
            strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->accyAct = strtod(temp, &ptr);
      i++;
    }
    else if (jsoneq(buf, &t[i], "acc.z") == 0) {
      /* We may additionally check if the value is either "true" or "false" */
//       printf("acc.z: %.*s\n", t[i+1].end-t[i+1].start, buf + t[i+1].start);
            strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->acczAct = strtod(temp, &ptr);
      i++;
    }
    else if (jsoneq(buf, &t[i], "range.zrange") == 0) {
      /* We may want to do strtol() here to get numeric value */
//       printf("range.zrange: %.*s\n", t[i+1].end-t[i+1].start, buf + t[i+1].start);
            strncpy(temp, buf + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->baropAct = strtod(temp, &ptr);
        }
    else {
      printf("Unexpected key: %.*s\n", t[i].end-t[i].start,buf + t[i].start);
    }
  }

    if (yaw != yawOld) {
        yawOld = yaw;
        printf("yawOld is %d \n", yawOld);
    }
    else {
        printf("yawOld is the same \n");
        
    }
  
  //TODO: Controller for the drone. Put here
  
   printf("Sending to Python server: \n");
   int thrust, roll, pitch, yawrate;
   char *thrustc;
   char *rollc;
   char *yawratec;
   char *pitchc;
   
   thrust = htonl(IN_droneData->thrustRef);
   yawrate = htonl(IN_droneData->yawrateRef);
   roll = htonl(IN_droneData->rollRef);
   pitch = htonl(IN_droneData->pitchRef);
   
   bzero(droneref,256);   
   snprintf(droneref, sizeof( droneref ), "%d %d %d %d ", yawrate, pitch, roll, thrust);
   
   printf("setpoint for the drone: dref %s\n",droneref);
   sendRequest(sockfd, droneref);     
}

