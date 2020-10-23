//zoobime
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

void sys_err(char *str)
{
  perror(str);
  exit(1);
}

int main(void)
{
  pid_t pid;
  int i;
  for(i=0;i<10;i++){
    if((pid=fork())==0)
      break;
    else if(pid<0)
      sys_err("fork");
  }
  if (pid==0){
    int n=8;
    while(n--){
      printf("child id %d\n",getpid());
      sleep(1);
    }
  }
  else if (pid>0){
    while(1){
      printf("parent id %d\n",getpid());
      sleep(1);
    }
  }
  return 0;
}
