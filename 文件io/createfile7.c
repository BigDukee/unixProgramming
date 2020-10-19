//ÎÄ¼ş´íÎóÊä³ö£¬perror


#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
  int fd = open("sadfsafsa",O_RDWR);

  if (fd<0){
    perror("wrong!");
  }
  printf("fd=%d\n",fd);
  return 0;
}
