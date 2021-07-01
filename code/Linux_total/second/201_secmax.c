/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 19:40
 * Filename      : 201_secmax.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  int a[] = {1,6,123,45,56,999,24,12,79,65,84};
  printf("original array is: ");
  for (int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    printf("%d ", a[i]);
  printf("\n");

  int max1=a[0], j, max2;
  for (int i=0; i<sizeof(a)/sizeof(a[0]); i++){
    if (max1 < a[i]){
      max1 = a[i];
      j = i;
    }
  }
  a[0] ^= a[j];
  a[j] ^= a[0];
  a[0] ^= a[j];
  
  max2 = a[1];
  for (int i=1; i<sizeof(a)/sizeof(a[0]); i++){
    if (max2 < a[i])
      max2 = a[i];
  }

  printf("the second maximum value is %d\n", max2);
}
