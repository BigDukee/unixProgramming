#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  char buf[10];
  int fd,i,n;
  fd=open("/dev/tty",O_RDONLY|O_NONBLOCK);
  if(fd<0){
    perror("open /dev/tty");
    exit(1);
  }
  for(i=0;i<5;i++){
    n=read(fd,buf,10);
    if(n>=0){
      break;
    }
    if(errno!=EAGAIN){
      perror("read /dev/tty");
      exit(1);
    }
    sleep(1);
    write(STDOUT_FILENO,"try again\n",strlen("try again\n"));
  }
  if(i==5){
    write(STDOUT_FILENO,"time out\n",strlen("time out\n"));
  }
  else{
    write(STDOUT_FILENO,"buf",n);
  }
  close(fd);
  return 0;
}
