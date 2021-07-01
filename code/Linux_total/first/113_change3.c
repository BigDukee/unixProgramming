/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 19:02
 * Filename      : 113_change3.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <string.h>


int main()
{
  char s1[50] = "you think you live the Pura Vida";
  char s2[50] = "you fucking love la Costa Rica";
  char s3[50];
  printf("original string1 is:\n%s\noriginal string2 is:\n%s\n\n", s1, s2);
  strcpy(s3, s1);
  strcpy(s1, s2);
  strcpy(s2, s3);
  printf("now string1 is:\n%s\nnow string2 is:\n%s\n", s1, s2);
}
