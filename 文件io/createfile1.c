//创建一个文件，名字是abs，并且赋权777，但是要根据当时的umask值


#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>



int main(void)
{
  int fd;
  fd = open("abs",O_CREAT,0777);
  printf ("fd = %d\n",fd);

  return 0;
}
