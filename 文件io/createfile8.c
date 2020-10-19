//fseek
//文件内容修改，选择偏移量，在后面增加
//使用od -txc 打开文件


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>


int main(void)
{
  int fd = open("abc",O_RDWR);
  if (fd<0){
    perror("open abc");
    exit(-1);
  }

  lseek(fd, 0x100, SEEK_SET);
  write(fd,"r",1);

  close(fd);
  return 0;
}
