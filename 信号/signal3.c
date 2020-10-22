//sigprocmask()     read or change a signal mask word for a process
//sigpending()   read the pending signal set of the current process



#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void printsigset(const sigset_t *set)
{
  int i;
  for (i=1;i<32;i++){
    if (sigismember(set,i)==1)
      putchar('1');
    else
      putchar('0');
    puts("");
  }
}

int main(void)
{
  sigset_t s,p;
  sigemptyset(&s);
  sigaddset(&s,SIGINT);
  sigprocmask(SIG_BLOCK,&s,NULL);
  while(1){
    sigpending(&p);
    printsigset(&p);
    sleep(1);
  }
  return 0;
}
