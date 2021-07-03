/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 14:38
 * Filename      : 01_strlen.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int count(char* argv)
{
  if (*argv != '\0'){
    return 1 + count(argv + 1);
  } else {
    return 0;
  }
}

int main()
{
  char buf[] = "hello c program";
  int x = count(buf);
  printf("your string is \"%s\", the length is %d \n", buf, x);
  return 0;
}
