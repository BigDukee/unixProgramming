/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 16:28
 * Filename      : 302_local.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  int b[9];
  int k=0, max=0;
  int a[3][3];
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      scanf("%d", &a[i][j]);
      b[k] = a[i][j];
      k++;
    }
    printf("\n");
  }

  for (int i=0; i<9; i++){
    printf("%d ", b[k]);
  }
  //printf("%d\n", max);

  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
