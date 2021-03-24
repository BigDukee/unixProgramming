#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main (int argc,char const *argv[])
{
  int fd,count;
  char buf[100]="new new new!";
  fd=open("qwer.txt",O_RDWR | O_APPEND | O_TRUNC);
  if(fd==-1){
    perror("open failed");
    exit(1);
  }
  else 
    printf("open success!\n");


  count=write(fd,buf,strlen(buf));
  if(count==-1){
    perror("write failed!\n");
    exit(1);
  }
  else
    printf("write success!\ntotal bytes is %d\ncontent is %s\n",count,buf);

  close(fd);

  return 0;
}
