#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main (int argc,char const *argv[])
{
  int fd;
  fd=open("qwerr.txt",O_RDWR | O_CREAT | O_EXCL, 666);
  if(fd==-1){
    perror("open failed!\n");
    exit(1);
  }
  else
    printf("open success!\n");

  close(fd);
  return 0;
}
