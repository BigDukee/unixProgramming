#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main (int argc,char const *argv[])
{
  int fd,count;
  char buf[100];
  fd=open("qwer.txt",O_RDWR);
  if(fd==-1){
    printf("failed");
  }
  else{
    printf("success!");
    count=read(fd,buf,100);
    if(count==-1){
      printf("failed\n");
    }
    else{
      printf("txt has %d bytes, content is %s\n",count,buf);
    }
  }
  close(fd);
  return 0;
}
