//open a file
//exec ./app



#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int main (int argc, char *argv[])
{
  int fd;
  if(argc!=2){
    fputs("usage: wrapper file\n",stderr);
    exit(1);
  }

  fd=open(argv[1],O_RDONLY);
  if(fd<0){
    perror("open");
    exit(1);
  }

  dup2(fd,STDIN_FILENO);
  close(fd);
  execl("./app","app",NULL);
  perror("exec ./app");
  exit(1);
}
