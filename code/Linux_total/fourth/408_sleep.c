/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-07-02 10:00
 * Filename      : 408_sleep.c
 * Description   : 
 * *******************************************************/

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void handler(int signo)
{
}

int mysleep(int timeout)
{
  struct sigaction act, oldact;
  act.sa_handler = handler;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(SIGALRM, &act, &oldact);
  alarm(timeout);
  pause();
  int ret = alarm(0);
  sigaction(SIGALRM, &act, NULL);
  return ret;
}

int main()
{
  while(2) {
    printf("wangluogongcheng\n");
    mysleep(3);
  }
}
