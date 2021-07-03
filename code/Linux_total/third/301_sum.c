/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 16:17
 * Filename      : 301_sum.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
int main()
{
  int num;
  puts("please input a num less than 5 bits");
  scanf("%d", &num);
  int i=5;
  int sum=0;
  while(i){
    sum += num%10;
    num/=10;
    i--;
  }
  printf("%d\n", sum);
}
