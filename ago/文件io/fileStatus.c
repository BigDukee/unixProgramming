#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (void)
{
  char buf[10];
  int n;
  int flags;
  flags=fcntl(STDIN_FILENO,F_GETFL);
  flags |= O_NONBLOCK;            //bitwise OR
  if(fcntl(STDIN_FILENO,F_SETFL,flags)==-1){
    perror("fcntl");
    exit(1);
  }
tryagain:
  n=read(STDIN_FILENO,buf,10);
  if(n<0){
    if(errno==EAGAIN){
      sleep(1);
      write(STDOUT_FILENO,"try again",strlen("try again"));
      goto tryagain;
    }
    perror("read stdin");
    exit(1);
  }
  write(STDOUT_FILENO,buf,n);
  return 0;
}
