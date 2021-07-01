/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 23:13
 * Filename      : 107_change2.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <string.h>


int main()
{
  char s[] = "they would carry me home";
  s[0] -=32;
  for (int i=1; i<strlen(s); i++){
    if (s[i] == ' '){
      s[i+1] -= 32;
    }
  }
  printf("%s\n", s);
}
