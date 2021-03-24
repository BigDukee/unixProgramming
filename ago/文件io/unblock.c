#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h> 
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char buf[10];
  int fd,n;
  fd=open("/dev/tty",O_RDONLY|O_NONBLOCK);
  if(fd<0){
    perror("open /dev/tty");
    exit(1);
  }
tryagain:
  n=read(fd,buf,10);
  if(n<0){
    if(errno==EAGAIN){
      sleep(1);
      write(STDOUT_FILENO,"try again\n",strlen("try again\n"));
      goto tryagain;
    }
    perror("read /dev/tty");
    exit(1);
  }
  write(STDOUT_FILENO,buf,n);
  close(fd);
  return 0;
  
}
