//create many parents fork
//copy on write



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>


int main (void)
{
  pid_t pid;
  int n=0,m=3000;
  while(1){
    pid = fork();
    if (pid==0){
      break;
    }
    else if(pid>0)
      printf("%d| ",n++);
    else {
      exit(1);
    }
  }
  while(m--)
    sleep(1);

  return 0;
}
