#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main (int argc,char const *argv[])
{
  int fd,count;
  char buf[100];

  fd=open("qwer.txt",O_WRONLY);
  if(fd==-1){
    perror("open failed!\n");
    exit(1);
  }
  else {
    printf("open success!\n");
  }


  count=read(fd,buf,100);
  if(count==-1){
    perror("read failed!\n");
    exit(1);
  }
  else 
    printf("read success!\n");

  close(fd);
  return 0;
}
