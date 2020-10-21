//fifo communication
//read from fifo



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

void sys_err(char *str, int exitno)
{
  perror(str);
  exit(exitno);
}

int main(int argc, char *argv[])
{
  int fd,len;
  char buf[1024];
  if(argc<2){
    printf("app fifoname\n");
    exit(1);
  }

  fd=open(argv[1],O_RDONLY);
  if(fd<0)
    sys_err("open",1);
  len=read(fd,buf,sizeof(buf));
  write(STDOUT_FILENO,buf,len);
  close(fd);
  return 0;
}
