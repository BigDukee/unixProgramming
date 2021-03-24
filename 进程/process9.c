//kill zoombie process
//wait()



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>


int main (void)
{
  pid_t pid, pid_c;
  int n=10;
  pid = fork();
  if(pid>0){
    while(1){
      printf("parent%d\n",getpid());
      pid_c = wait(NULL);
      printf("wait for child%d\n",pid_c);
      sleep(1);
    }
  }
  else if(pid==0){
    printf("child%d\n",getpid());
    sleep(10);
  }
  else {
    perror("fork");
    exit(1);
  }
  return 0;
}
