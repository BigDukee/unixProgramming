//orphan process & init()


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(void)
{
  pid_t pid;
  int n=3;
  while(n--){
    pid=fork();
    if(pid==0)
      break;
  }
  if (pid==0){
    while(1){
      printf("child%d\n",getpid());
      sleep(3);
    }
  }
  else if(pid>0){
    pid_t pid_c;
    while(1){
      pid_c=wait(NULL);
      if(pid_c == -1)
        break;
    }
  }
  return 0;
}
