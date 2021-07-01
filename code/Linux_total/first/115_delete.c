/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 19:25
 * Filename      : 115_delete.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "i love you but it's hard to believe";
  char s1[30];
  char a = 't';
  printf("orignale string is:%s\ndelete the '%c'\n", s, a);
  for (int i=0, j=0; i<sizeof(s); i++){
    if (s[i] != a){
      s1[j] = s[i];
      j++;
    }
  } 
  printf("now string is:%s\n", s1);
}
