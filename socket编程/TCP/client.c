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
  confd=socket(AF_INET,SOCK_STREAM,0);

  //2.initializes the server address
  bzero(&serveraddr,sizeof(serveraddr));
  serveraddr.sin_family=AF_INET;
  //ipadress
  inet_pton(AF_INET,ipstr,&serveraddr.sin_addr.s_addr);
  serveraddr.sin_port=htons(SERVER_PORT);
  //3.connect
  connect(confd,(struct sockaddr *)&serveraddr,sizeof(serveraddr));
  //4.request the server to process the data
  write(confd,argv[1],strlen(argv[1]));
  len=read(confd,buf,sizeof(buf));
  write(STDOUT_FILENO,buf,len);
  //5.close socket
  close(confd);
  return 0;

}
