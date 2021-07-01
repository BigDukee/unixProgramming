/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 23:36
 * Filename      : 109_deletespace.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "    approching           the    window              i've seen   inside";
  char buf[30];
  int j=0;
  printf("original string is:\n%s\n",s);
  for (int i=0; i<sizeof(s); i++){
    if (s[i]!=' ' || s[i+1]!=' '){
      buf[j] = s[i];
      j++;
    }
  }
  j = 0;
  if (buf[0] == ' ') {
    while (buf[j] != '\0'){
      buf[j] = buf[j+1];
      j++;
    }
  }
  printf("now string is:\n%s\n", buf);
}
