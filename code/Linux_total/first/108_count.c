/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 23:29
 * Filename      : 108_count.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "need time to make my own home place";
  int count=1;
  for (int i=0; i<sizeof(s); i++){
    if (s[i] == ' '){
      count++;
    }
  }
  printf("the string is:\n%s\nit has %d words\n", s, count);
}
