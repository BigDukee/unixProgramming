/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 10:08
 * Filename      : 315_circle.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <malloc.h>


int main()
{
  typedef struct LNode {
    char data;
    struct LNode* next;
  }LinkNode;

  LinkNode *s;
  LinkNode *L = (LinkNode*)malloc(sizeof(LinkNode));
  L->next = NULL;
  char a[] = "abcdefghijki";
  for (int i=0; i<sizeof(a)-1; i++){
    s = (LinkNode *)malloc(sizeof(LinkNode));
    s->data = a[i];
    s->next = L->next;
    L->next = s;
  }
  LinkNode *fast = L->next->next;
  LinkNode *slow = L->next;
  int flag=0;
  while (fast!=NULL && fast->next!=NULL) {
    if (fast == slow){
      printf("has circle!\n");
      flag = 1;
      break;
    }
    fast = fast->next->next;
    slow = slow->next;
  }
  if (flag==0)
    printf("no circle!\n");
}
