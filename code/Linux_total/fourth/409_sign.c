/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-07-02 10:13
 * Filename      : 409_sign.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int s2=0,s3=0;

void handler(int sig)
{
  if (sig==2){
    s2++;
    if (s2!=7){
      printf("signal 2 receive\n");
    } else {
      kill(getpid(), 9);
    }
  }
}

void handler3(int sig)
{

  if (sig==3){
    s3++;
    if (s3!=9) {
      printf("signal 3 receive\n");
    } else {
      kill(getpid(), 9);
    }
}
}

int main()
{
  signal(2,handler);
  signal(3,handler3);
  while(1) {
    printf("hello world\n");
    sleep(1);
  }
}
