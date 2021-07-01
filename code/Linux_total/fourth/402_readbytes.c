/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 00:37
 * Filename      : 402_readbytes.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
  char s[1];
  int fd = open("401", O_RDWR);
  lseek(fd, 0x10,SEEK_SET);
  read(fd, s, 1);
  printf("0x10 is %s\n", s);
  lseek(fd, -0x10, SEEK_END);
  read(fd, s, 1);
  printf("the last 0x10 is %s\n", s);
}
