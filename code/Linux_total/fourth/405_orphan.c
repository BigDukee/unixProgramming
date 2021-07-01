/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 09:24
 * Filename      : 405_orphan.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>


int main()
{
  pid_t pid = fork();
  if (pid == 0){
    printf("i am child\n");
    sleep(30);
  } else {
    printf("i am father\n");
    sleep(10);
  }
}
