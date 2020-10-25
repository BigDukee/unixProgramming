#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define SERVER_PORT 8000
#define MAXLINE 4096

int main(int argc,char *argv[])
{
  int confd,len;
  char ipstr[]="127.0.0.1";
  char buf[MAXLINE];
  struct sockaddr_in serveraddr;
  if (argc<2){
    printf("./client str\n");
    exit(1);
  }
  //1.create a socket
  confd=socket(AF_INET,SOCK_DGRAM,0);

  //2.initializes the server address
  bzero(&serveraddr,sizeof(serveraddr));
  serveraddr.sin_family=AF_INET;
  //ipadress
  inet_pton(AF_INET,ipstr,&serveraddr.sin_addr.s_addr);
  serveraddr.sin_port=htons(SERVER_PORT);
  //send data to server
  sendto(confd,argv[1],strlen(argv[1]),0,(struct sockaddr*)&serveraddr,sizeof(serveraddr));
  len=recvfrom(confd,buf,sizeof(buf),0,NULL,0);
  write(STDOUT_FILENO,buf,len);
  //5.close socket
  close(confd);
  return 0;

}
