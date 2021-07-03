/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 22:32
 * Filename      : 104_strcmp.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char* s1 = "computer";
  char* s2 = "science";
  printf("s1 = %s, s2 = %s\n", s1, s2);
  int len1=0, len2=0;
  while (*(s1++) != '\0'){
    len1++;
  }
  while (*(s2++) != '\0'){
    len2++;
  }
  if (len1 < len2){
    printf("s1<s2\n");
  } else if (len1 > len2){
    printf("s1>s2\n");
  } else {
    printf("s1==s2\n");
  }
}
