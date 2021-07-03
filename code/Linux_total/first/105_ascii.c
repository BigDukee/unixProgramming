/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 22:42
 * Filename      : 105_ascii.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "i love u";
  int i = 0, len = sizeof(s);
  while(i < len){
    if (s[i] !=' '){
      s[i] = s[i]+1;
      i++;
    } else {
      s[i] = s[i];
      i++;
    }
  }
  printf("%s\n", s);
}
