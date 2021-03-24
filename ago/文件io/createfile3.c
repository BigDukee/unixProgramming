//生成一个文件，事先在其中添加内容



#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int fd;
  char buf[] = "hello world!";
  if (argc < 2){
    printf("./app filename\n");
    exit(1);
  }
  fd = open(argv[1],O_CREAT | O_RDWR ,0644);
  write(fd, buf, strlen(buf));
  printf("fd=%d\n",fd);

  close(fd);
  return 0;
}
