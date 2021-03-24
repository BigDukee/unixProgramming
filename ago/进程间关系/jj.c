#include <stdio.h>
#include <time.h>

int main(void)
{
  char buf[1024];
  time_t t;
  time(&t);
  ctime_r(&t,buf);
  printf("%s\n",buf);

  return 0;
}
