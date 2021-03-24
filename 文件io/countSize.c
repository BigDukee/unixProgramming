#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
int main(int argc ,char const *argv[])
{
  if(argc!=2){
    perror("filename?");
    exit(1);
  }
  int fd;
  fd=open(argv[1],O_RDWR);
  if(fd==-1){
    perror("open fail");
    exit(1);
  }
  else{
    printf("open success: ");
 // }

  int count=lseek(fd,0,SEEK_END);
  printf("it's size %d\n",count);
}
  close(fd);
  return 0;
}
