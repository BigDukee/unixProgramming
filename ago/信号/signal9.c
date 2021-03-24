//no zoombie

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <signal.h>

void sys_err(char *str)
{
  perror(str);
  exit(1);
}

void do_sig_child(int signo)
{
//    waitpid(0,NULL,WNOHANG);
  while(!(waitpid(0,NULL,WNOHANG)==-1));
}
int main(void)
{
  pid_t pid;
  int i;
  //block sigchild
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
    //1.caputer;
    //2.unblock sigchld
    struct sigaction act;

    act.sa_handler=do_sig_child;
    sigemptyset(&act.sa_mask);
    act.sa_flags=0;
    sigaction(SIGCHLD,&act,NULL);
    while(1){
      printf("parent id %d\n",getpid());
      sleep(1);
    }
  }
  return 0;
}
