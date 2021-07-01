/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 12:45
 * Filename      : 205_insert.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  int a[] = {43, 67, 48, 42, 9, 24, 2, 6, 9, 10};
  int temp;
  printf("original array is: ");
  for (int i=0; i<10; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  for (int i=2; i<10; i++){
    for (int j=i; j>0&&a[j]<a[j-1]; j--){
      temp = a[j];
      a[j] = a[j-1];
      a[j-1] = temp;
    }
  }
  printf("insert sort is: ");
  for (int i=0; i<10; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}
