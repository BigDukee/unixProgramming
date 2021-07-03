/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 19:38
 * Filename      : 116_delete2.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "i would adore you if i saw you again";
  char s1[30];
  int m=3, n=10;
  printf("original string is:%s\ndelete %dth to %dth\n", s, m, n);
  for (int i=0, j=0; i<sizeof(s); i++){
    if (i<m-1 || i>n-1){
      s1[j] = s[i];
      j++;
    }
  }
  printf("now array is:%s\n", s1);
}
