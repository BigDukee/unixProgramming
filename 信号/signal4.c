//signal capture setting


#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void do_sig(int num)
{
  printf("do_sig\n");
  printf("num = %d\n",num);
}

int main(void)
{
  struct sigaction act;

  act.sa_handler=do_sig;
  sigemptyset(&act.sa_mask);
  act.sa_flags=0;
  sigaction(SIGINT,&act,NULL);

  while(1){
    printf("************\n");
    sleep(1);
  }
  return 0;
}
