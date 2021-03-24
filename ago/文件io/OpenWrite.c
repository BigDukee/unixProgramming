#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main (int argc,char const *argv[])
{
  int fd,count;
  char rdbuf[50];

  fd=open("qwer.txt",O_RDWR);
  if(fd==-1){
    perror("open failed");
    exit(1);
  }
  else{
    printf("open sucess");
  }


  char buf[100]="hhghjghsdfhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhaklljghjashjhjdfhsdh";
  count=write(fd,buf,strlen(buf));
  if(count==-1){
    perror("write failed");
    exit(1);
  }
  else
    printf("write success!");

  count=read(fd,rdbuf,50);
  if(count==-1){
    perror("read failed");
    exit(1);
  }
  else
    printf("read sucess:text bytes is: %d\n\ttextcontent is :%s\n",count,buf);

  close(fd);
  return 0;
}

