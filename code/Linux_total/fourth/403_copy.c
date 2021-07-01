/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 00:50
 * Filename      : 403_copy.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>


int main()
{
  int fd1 = open("401", O_RDONLY);
  char buf[1024];
  int fd2 = open("403", O_CREAT | O_RDWR | O_TRUNC, 0777); 
  int ret;
  while(1){
    ret = read(fd1, buf, 1024);
    if (ret ==0)
      break;
    write(fd2, buf, ret);
  }
}
