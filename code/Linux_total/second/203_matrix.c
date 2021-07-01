/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 11:13
 * Filename      : 203_matrix.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>


int main()
{
  int a[3][4] = {{1,2,3,4},{5,7,10,11},{12,18,20,26}};
  int n;
  printf("the matrix is: \n");
  for (int i=0; i<3; i++){
    for (int j=0; j<4; j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("input a num: ");
  scanf("%d", &n);

  int col, row, flag=0;
  for (int i=0; i<3 ; i++){
    if (n <= a[i][3]){
      col = i;
      break;
    }
    if (i==2 && a[i][3] !=n)
      flag=1;
  }
  for (int j=0; j<4; j++){
    if (a[col][j] == n){
      row = j;
      break;
    }
    if (j==3 && a[col][j] !=n){
      flag=1;
    }
  }
  if (flag==1){
    printf ("no exis\n");
  }else {
    printf ("the col is %d, the row is %d\n", col+1, row+1);
  }
}
