/* User code: This file will not be overwritten by TASTE. */

#include "socketclient.h"
#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <netinet/in.h>

#include <string.h>
#include "jsmn.h"

static int jsoneq(const char *json, jsmntok_t *tok, const char *s) {
	if (tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start &&
			strncmp(json + tok->start, s, tok->end - tok->start) == 0) {
		return 0;
	}
	return -1;
}

void socketclient_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void socketclient_PI_readStabilizerSendThrust(const asn1SccMyDroneData *IN_droneData,
                                              asn1SccMySensorData *OUT_sensorData)
{
    /* Write your code here! */
     int sockfd, portno, n, thrust, roll, pitch, yawrate;
   struct sockaddr_in serv_addr;
   struct hostent *server;

   char buffer[256];
   char *thrustc;
   char *rollc;
   char *yawratec;
   char *pitchc;

   portno = 50008;

   /* Create a socket point */
   sockfd = socket(AF_INET, SOCK_STREAM, 0);

   if (sockfd < 0) {
      perror("ERROR opening socket");
      exit(1);
   }

   server = gethostbyname("127.0.0.1");

   if (server == NULL) {
      fprintf(stderr,"ERROR, no such host\n");
      exit(0);
   }

   bzero((char *) &serv_addr, sizeof(serv_addr));
   serv_addr.sin_family = AF_INET;
   bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
   serv_addr.sin_port = htons(portno);

   /* Now connect to the server */
   if (connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
      perror("ERROR connecting");
      exit(1);
   }

   /* Now read server response */
   bzero(buffer,256);
   n = read(sockfd, buffer, 255);

   if (n < 0) {
      perror("ERROR reading from socket");
      exit(1);
   }
   
   //////////////
   
	int i, r;
    char temp[512];
    char *ptr;
	jsmn_parser p;
	jsmntok_t t[128]; /* We expect no more than 128 tokens */

	jsmn_init(&p);
	r = jsmn_parse(&p, buffer, strlen(buffer), t, sizeof(t)/sizeof(t[0]));
	if (r < 0) {
		printf("Failed to parse JSON: %d\n", r);
		
	}

	/* Assume the top-level element is an object */
	if (r < 1 || t[0].type != JSMN_OBJECT) {
		printf("Object expected\n");
		
	}

	/* Loop over all keys of the root object */
	for (i = 1; i < r; i++) {
				if (jsoneq(buffer, &t[i], "stabilizer.yaw") == 0) {
			/* We may use strndup() to fetch string value */
			printf("stabilizer.yaw: %.*s\n", t[i+1].end-t[i+1].start,
					buffer + t[i+1].start);
            strncpy(temp, buffer + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->yawAct = strtod(temp, &ptr);
            
            //*OUT_updated_thrust = strtod(temp, &ptr);
            i++;

            //printf("stabilizer.yaw is float %.f\n", atof(temp));
		} 
        
		else if (jsoneq(buffer, &t[i], "stabilizer.pitch") == 0) {
			/* We may additionally check if the value is either "true" or "false" */
			printf("stabilizer.pitch: %.*s\n", t[i+1].end-t[i+1].start,
					buffer + t[i+1].start);
            strncpy(temp, buffer + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->pitchAct = strtod(temp, &ptr);
			i++;
		}
		else if (jsoneq(buffer, &t[i], "stabilizer.roll") == 0) {
			/* We may want to do strtol() here to get numeric value */
			printf("stabilizer.roll: %.*s\n", t[i+1].end-t[i+1].start,
					buffer + t[i+1].start);
            strncpy(temp, buffer + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->rollAct = strtod(temp, &ptr);
			i++;
		}
		
		else if (jsoneq(buffer, &t[i], "acc.x") == 0) {
			/* We may additionally check if the value is either "true" or "false" */
			printf("acc.x: %.*s\n", t[i+1].end-t[i+1].start,
					buffer + t[i+1].start);
            strncpy(temp, buffer + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->accxAct = strtod(temp, &ptr);
			i++;
		}
		else if (jsoneq(buffer, &t[i], "acc.y") == 0) {
			/* We may want to do strtol() here to get numeric value */
			printf("acc.y: %.*s\n", t[i+1].end-t[i+1].start,
					buffer + t[i+1].start);
            strncpy(temp, buffer + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->accyAct = strtod(temp, &ptr);
			i++;
		}
		else if (jsoneq(buffer, &t[i], "acc.z") == 0) {
			/* We may additionally check if the value is either "true" or "false" */
			printf("acc.z: %.*s\n", t[i+1].end-t[i+1].start,
					buffer + t[i+1].start);
            strncpy(temp, buffer + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->acczAct = strtod(temp, &ptr);
			i++;
		}
		/*
		else if (jsoneq(buffer, &t[i], "baro.pressure") == 0) {
			// We may want to do strtol() here to get numeric value
			printf("baro.pressure: %.*s\n", t[i+1].end-t[i+1].start,
					buffer + t[i+1].start);
            strncpy(temp, buffer + t[i+1].start, t[i+1].end-t[i+1].start);
            temp[t[i+1].end-t[i+1].start] = '\0';
            //printf("yaw is %f \n", strtod(temp, &ptr));
            OUT_sensorData->baropAct = strtod(temp, &ptr);
			i++;
		}
		*/
		else {
			printf("Unexpected key: %.*s\n", t[i].end-t[i].start,
					buffer + t[i].start);
		}
	}
   ////////////////
   /* Print received message */
   printf("%s\n",buffer);

   thrust = htonl(IN_droneData->thrustRef - 15000);
   yawrate = htonl(IN_droneData->yawrateRef);
   roll = htonl(IN_droneData->rollRef);
   pitch = htonl(IN_droneData->pitchRef);
   
   
   char droneref[256];
   bzero(droneref,256);
   
    thrustc = (char*)&thrust;
//    yawratec = (char*)&yawrate;
//    rollc = (char*)&roll;
//    pitchc = (char*)&pitch;
   
   snprintf(droneref, sizeof( droneref ), "%d %d %d %d ", yawrate, pitch, roll, thrust);
   
   printf("\n");
//    printf("t %.*s\n", thrustc);
//    printf("y %.*s\n", yawratec);
//    printf("r %.*s\n",rollc);
//    printf("p %.*s\n",pitchc);
   printf("dref %s\n",droneref);
   
   printf("\n");

   /* Send message to the server */
   n = write(sockfd, droneref, sizeof(droneref));

   if (n < 0) {
      perror("ERROR writing to socket");
      exit(1);
   }

}

