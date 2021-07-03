/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-26 19:47
 * Filename      : 117_delete3.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <string.h>


int main()
{
  char s[] = "life goin' no where. someone help me ";
  char a[] = "someone";
  char s1[10][10];
  int k=0;
  printf("original string is:%s\ndelete the word is:%s\n", s, a);
  for (int i=0, j=0; i<sizeof(s); i++){
      if (s[i] == ' '){
        k++;
        j=0;
      } else {
        s1[k][j] = s[i];
        j++;
      } 
  }
  printf ("now string is:");
  for (int j=0; j<k; j++){
    if (!strcmp(s1[j], a)){
      j++;
    }
    printf("%s ", s1[j]);
  }
  printf("\n");
}
