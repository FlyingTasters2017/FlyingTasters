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

void socketclient_PI_readStabilizerSendThrust(const asn1SccMyReal *IN_ref_thrust, asn1SccMyReal *OUT_updated_thrust)
{
  //int main(int argc, char *argv[]) {
   int sockfd, portno, n, thrust;
   struct sockaddr_in serv_addr;
   struct hostent *server;

   char buffer[256];
   char *sendData;

   portno = 50007;

   /* Create a socket point */
   sockfd = socket(AF_INET, SOCK_STREAM, 0);
   
   // to reuse the port number start
   int optval = 1;
   setsockopt(sockfd, SOL_SOCKET, SO_REUSEPORT, &optval, sizeof(optval));
   // to reuse the port number end

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
            printf("yaw is ", strtol(temp, &ptr, 10));
            *OUT_updated_thrust = strtol(temp, &ptr, 10);
            i++;

            //printf("stabilizer.yaw is float %.f\n", atof(temp));
		} 
        /*
		else if (jsoneq(buff, &t[i], "stabilizer.pitch") == 0) {
			/* We may additionally check if the value is either "true" or "false" 
			printf("stabilizer.pitch: %.*s\n", t[i+1].end-t[i+1].start,
					buff + t[i+1].start);
			i++;
		}
		else if (jsoneq(buff, &t[i], "stabilizer.roll") == 0) {
			/* We may want to do strtol() here to get numeric value 
			printf("stabilizer.roll: %.*s\n", t[i+1].end-t[i+1].start,
					buff + t[i+1].start);
			i++;
		}/* else if (jsoneq(buff, &t[i], "groups") == 0) {
			int j;
			printf("- Groups:\n");
			if (t[i+1].type != JSMN_ARRAY) {
				continue; // We expect groups to be an array of strings
			}
			for (j = 0; j < t[i+1].size; j++) {
				jsmntok_t *g = &t[i+j+2];
				printf("  * %.*s\n", g->end - g->start, buff + g->start);
			}
			i += t[i+1].size + 1;
		}*/ 
		else {
			printf("Unexpected key: %.*s\n", t[i].end-t[i].start,
					buffer + t[i].start);
		}
	}
   ////////////////
   /* Print received message */
   printf("%s\n",buffer);

   thrust = htonl(*IN_ref_thrust);
   sendData = (char*)&thrust;

   /* Send message to the server */
   n = write(sockfd, sendData, sizeof(sendData));

   if (n < 0) {
      perror("ERROR writing to socket");
      exit(1);
   }

}

