/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 12:38
 * Filename      : 204_bubble.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  int a[] = {93, 29, 14, 43, 1, 8, 3, 9, 3, 9};
  int temp;
  printf("original array is: ");
  for (int i=0; i<10; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  for (int i=0; i<10; i++){
    for (int j=0; j<=10-i; j++){
      if (a[j] > a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  printf("bubble sort is: ");
  for (int i=0; i<10; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
