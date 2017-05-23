/* User code: This file will not be overwritten by TASTE. */

#include "socketclient.h"
#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <netinet/in.h>

#include <string.h>

void socketclient_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void socketclient_PI_readStabilizerSendThrust()
{
/* Write your code here! */
//int main(int argc, char *argv[]) {
   int sockfd, portno, n, thrust;
   struct sockaddr_in serv_addr;
   struct hostent *server;

   char buffer[256];
   char *sendData;

   portno = 50007;

   /* Create a socket point */
   sockfd = socket(AF_INET, SOCK_STREAM, 0);

   if (sockfd < 0) {
      perror("ERROR opening socket");
      exit(1);
   }

   server = gethostbyname("localhost");

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
   /* Print received message */
   printf("%s\n",buffer);

   thrust = htonl(10000);
   sendData = (char*)&thrust;

   /* Send message to the server */
   n = write(sockfd, sendData, sizeof(sendData));

   if (n < 0) {
      perror("ERROR writing to socket");
      exit(1);
   }
   //return 0;
//}
}

