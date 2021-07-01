/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 17:04
 * Filename      : 112_reverse.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "live";
  printf ("original string is:%s\n", s);
  printf ("now string is:");
  for (int i=sizeof(s); i>=0; i--){
    printf("%c", s[i]);
  }
  printf("\n");
}
