/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 14:55
 * Filename      : 02_strcpy.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


char* copy(char* argv1, char* argv2)
{
  char* st = argv2;
  while(*argv1 != '\0'){
    *argv2 = *argv1;
    argv1 ++;
    argv2 ++;
  }
  *argv2 = '\0';
  return st;
}


int main()
{
  char buf1[] = "computer\nscience\n";
  char buf2[30];
  printf("original string is:\n%snow string is:\n%s", buf1, copy(buf1, buf2));
  return 0;
}
