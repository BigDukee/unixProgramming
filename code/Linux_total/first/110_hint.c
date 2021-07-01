/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 16:01
 * Filename      : 110_hint.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "we fell apart with your head on my shoulder a work of art";
  char s1[20];
  int j=1;
  printf("original string is:\n%s\n",s);
  for (int i=0; i<sizeof(s); i++){
    if (s[i] == ' '){
      s1[j] = s[i+1];
      j++;
    }
  }
  s1[0] = s[0];
  printf("now string is:\n%s\n", s1);
}
