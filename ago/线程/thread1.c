//thread_self()   get the thread tid


#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *th_fun(void *arg)
{
  int *p=(int *)arg;
  printf("thread PID=%d\n",getpid());
  printf("thread ID=%x\n" ,(int)pthread_self());
  printf("thread *arg=%d\n",*p);
  sleep(1);
}

int main(void)
{
  pthread_t tid;
  int n=10;

  pthread_create(&tid,NULL,th_fun,(void*)&n);
  printf("main thread ID = %x\n",(int)pthread_self());
  printf("main child thread ID=%x\n",(int)tid);
  printf("main PID = %d\n",getpid());
  sleep(2);

  return 0;
}
