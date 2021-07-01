/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 09:15
 * Filename      : 405_zombie.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
  pid_t pid = fork();
  if (pid == 0) {
    printf("i am child\n");
    sleep(3);
  }else {
    printf("i am father\n");
    sleep(30);
  }
}
