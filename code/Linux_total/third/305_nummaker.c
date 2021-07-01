/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 19:15
 * Filename      : 305_nummaker.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  for (int i=1; i<5; i++){
    for (int j=1; j<5; j++){
      for (int k=1; k<5; k++){
        if (i!=j && i!=k && j!=k)
        printf("%d%d%d ", i, j, k);
      }
    }
  }
  printf("\n");
}
