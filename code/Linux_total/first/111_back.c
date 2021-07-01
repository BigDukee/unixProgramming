/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 16:35
 * Filename      : 111_back.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "level";
  for (int i=0, j=sizeof(s)-2; i<j; i++,j--){
    if (s[i] != s[j]){
      printf("no!\n");
      break;
    }
    if (i>=j-2){
      printf("yes\n");
    }
  }
}
