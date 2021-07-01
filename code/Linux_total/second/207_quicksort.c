/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 09:37
 * Filename      : 2-7_quicksort.c
 * Description   : 
 * *******************************************************/

#include <stdio.h>


void quicksort(int* a, int left, int right)
{
  int i = left;
  int j = right;
  int pivot = a[left];
  if (left >= right)
    return;
  while (left < right){
    while (left<right && pivot <= a[right]){
      right--;
    }
    if (pivot > a[right]){
      a[left] = a[right];
      left++;
    }
    while (left<right && pivot >= a[left]){
      left++;
    }
    if (pivot < a[left]){
      a[right] = a[left];
      right--;
    }
  }
  a[left] = pivot;
  quicksort(a, i, left-1);
  quicksort(a, left+1, j);
}

int main()
{
  int a[] = {32, 45, 12, 76, 23, 10, 77, 30, 16, 61};
  printf("original array is: ");
  for (int i=0; i<10; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  quicksort(a, 0, 9);
  printf("quicksort array is: ");
  for (int i=0; i<10; i++){
    printf ("%d ", a[i]);
  }
  printf("\n");
}
