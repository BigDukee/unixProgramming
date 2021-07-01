/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 15:41
 * Filename      : 03strcat.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>

void cat(char* s1, char* s2)
{
  while(*s1 != '\0'){
    s1++;
  }
  while (*s2 != '\0'){
    *s1 = *s2;
    s1++;
    s2++;
  }
  *s1 = '\0';
}

int main()
{
  char s1[20] = "computer";
  char* s2 = "science";
  char* s3 = s1;
  cat(s1, s2);
  printf("%s\n", s3);
}
