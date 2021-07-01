/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 01:12
 * Filename      : 404_fork1.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
  int j;
  pid_t pid = fork();
  if (pid==0){
    system("firefox www.ahstu.edu.cn");
  } else {
    for (int i=2; i<100; i++){
      for (j=2; j<=10; j++){
        if (i%j == 0)
          break;
      }
      if (j>10){
        printf("%d ", i);
      }
    }
  }
}
