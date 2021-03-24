//output pid & ppid


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main (void)
{
  pid_t pid;
  pid=fork();
  if(pid>0){
    printf("parent\n");
    exit(0);
  }
  else if(pid==0){
    while(1){
      printf("i am %d, my parent is %d\n",getpid(), getppid());
      sleep(1);
    }
  }
  else{
    perror(fork);
    exit(-1);
  }
  return 0;
}
