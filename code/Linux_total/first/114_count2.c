/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 19:14
 * Filename      : 114_count2.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  char s[] = "6 #abcde 12345!";
  printf("the string is:%s\n", s);
  int alphabet=0, space=0, number=0, others=0;
  for (int i=0; i<sizeof(s)-1; i++){
    if (s[i] >= 'A' && s[i] <= 'Z')
      alphabet++;
    else if (s[i] >= 'a' && s[i] <= 'z')
      alphabet++; 
    else if (s[i] == ' ')
      space++;
    else if (s[i] >= '0' && s[i] <= '9')
      number++;
    else
      others++;
  }
  printf("the count of alphabet, space, number, others is:%d %d %d %d\n", alphabet, space, number, others);
}
