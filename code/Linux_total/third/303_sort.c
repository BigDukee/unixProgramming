/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 17:02
 * Filename      : 303_sort.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


void change(int* a, int* b)
{
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}

int main()
{
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("orignal array is %d %d %d \n", a, b, c);
  if (a-b > 0){
    change (&a, &b);
  }
  if (a-c > 0){
    change (&a, &c);
  }
  if (b-c > 0){
    change (&b, &c);
  }
  printf("new array is %d %d %d \n", a, b, c);
}
