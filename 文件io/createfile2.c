//����һ���������ļ����򡱣������Լ���


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int fd;
  if (argc < 2){
    printf("./app filename\n");
    exit(1);
  }
  fd = open(argv[1],O_CREAT,0644);
  printf("fd=%d\n",fd);

  return 0;
}
