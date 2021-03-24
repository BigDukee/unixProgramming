#include <stdio.h>
#include <netinet/in.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
#define SERVER_PORT 8000
#define MAXLINE 4096

int main (void)
{
  int sockfd,i;
  struct sockaddr_in serveraddr,clientaddr;
  char buf[MAXLINE];
  char ipstr[INET_ADDRSTRLEN];
  socklen_t clientlen;
  ssize_t len;
  //create a socket
  sockfd=socket(AF_INET,SOCK_DGRAM,0);
  
  bzero(&serveraddr,sizeof(serveraddr));
  serveraddr.sin_family=AF_INET;  //ipv4
  serveraddr.sin_addr.s_addr=htonl(INADDR_ANY);    //local any ip
  serveraddr.sin_port=htons(SERVER_PORT);
  //bind
  bind(sockfd,(struct sockaddr*)&serveraddr,sizeof(serveraddr));

  while(1){
  clientlen=sizeof(clientaddr);
  len=recvfrom(sockfd,buf,sizeof(buf),0,(struct sockaddr*)&clientaddr,
    &clientlen);
  printf("client IP %s\tPORT%d\n",
    inet_ntop(AF_INET,&clientaddr.sin_addr.s_addr,
      ipstr,sizeof(ipstr)),ntohs(clientaddr.sin_port));

  i=0;
  while(i<len){
    buf[i]=toupper(buf[i]);
    i++;
  }
  sendto(sockfd,buf,len,0,(struct sockaddr*)&clientaddr,sizeof(clientaddr));
  }

  close(sockfd);

  return 0;
  
}
