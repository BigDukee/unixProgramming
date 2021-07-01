/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-24 18:25
 * Filename      : 304_prime.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <math.h>


int main()
{
  int a[500], k=0, j, m, n, sum=0;
  
  for (int i=2; i<1000; i++){
    for (j=2; j<=sqrt(i); j++){
      if (i%j==0){
        break;
      }
    }
    if (j > sqrt(i)){
      a[k] = i;
      k++;
    }
  }

  scanf("%d %d",&m, &n);

  for (int i=m; i<n-1; i++){
    sum += a[i];
  }
  printf("%d\n", sum);
}
