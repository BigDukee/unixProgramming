/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 14:26
 * Filename      : 206_shell.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  int a[] = {32, 23, 43, 54, 12, 95, 91, 10, 1, 3};
  int key = 5, k, temp;
  for (; key>=1; key/=2){
    for (int i=0; i<key; i++){
      for (int j=i+key; j<10; j+=key){
        //a[0] = a[j]; //pivot
        temp = a[j];
        k = j-key;
        while (k>=0 && a[k]>temp){
          a[k+key] = a[k];
          k -= key;
        }
        //a[k+key] = a[0];
        a[k+key] = temp;
      }
    }
  }

  for (int i=0; i<10; i++){
    printf("%d ", a[i]);
  }
}
