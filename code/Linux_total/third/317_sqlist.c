/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 14:20
 * Filename      : 317_sqlist.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <malloc.h>


int main()
{
  typedef struct {
    int data[20];
    int length;
  }SqList;
  int a1[] = {1,3,5,7,9};
  int a2[] = {2,4,6,8,10};
  SqList* L1 = (SqList*)malloc(sizeof(SqList));
  SqList* L2 = (SqList*)malloc(sizeof(SqList));
  SqList* L3 = (SqList*)malloc(sizeof(SqList));

  int i=0, k=0;
  while(i<sizeof(a1)/4){
    L1->data[k] = a1[i];
    k++;
    i++;
  }
  L1->length = k;
  
  i=0; k=0;
  while(i<sizeof(a2)/4){
    L2->data[k] = a2[i];
    k++;
    i++;
  }
  L2->length = k;
  
  i=0, k=0;
  int kk=0;
  for (; i<L1->length;) {
    if (L1->data[i] > L2->data[k]){
      L3->data[kk] = L2->data[k];
      kk++;
      k++;
    } else {
      L3->data[kk] = L1->data[i];
      i++;
      kk++;
    }
  }
  
  
  int len = L2->length+L2->length;
 
  for (i=0; i<len; i++){
    printf("%d ", L3->data[i]);
  }
  printf("\n");
}
