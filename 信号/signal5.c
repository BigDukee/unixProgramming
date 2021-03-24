//signal()


#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void do_sig(int n)
{
  printf("hello\n");
}

int main(void)
{
  signal(SIGINT,do_sig);
  while(1){
    printf("***********\n");
    sleep(1);
  }
  return 0;
}
