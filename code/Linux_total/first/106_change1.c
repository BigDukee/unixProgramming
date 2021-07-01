/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 23:13
 * Filename      : 106_change1.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <string.h>


int main()
{
  char s[] = "theY wOuld CARry Me HOmE";
  for (int i=0; i<strlen(s); i++){
    if (s[i]>='A' && s[i]<='Z'){
      s[i] += 32;
    }
  }
  printf("%s\n", s);
}
