/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 10:28
 * Filename      : 316_reverse.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <malloc.h>


int main()
{
  typedef struct LNode {
    char data;
    struct LNode *next;
  }LinkNode;

  LinkNode *s;
  LinkNode *L = (LinkNode*)malloc(sizeof(LinkNode));
  L->next = NULL;
  char a[] = "abcdefghik";
  for (int i=0; i< sizeof(a)-1; i++){
    s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = a[i];
    s->next = L->next;
    L->next = s;
  }

  printf("original string is:");
  LinkNode *xx = L->next;
  while(xx!=NULL) {
    printf("%c", xx->data);
    xx = xx->next;
  }
  printf("\n");

  LinkNode *ss;
  LinkNode* p = L->next;
  L->next = NULL;
  while (p!=NULL) {
    ss = p;
    p = p->next;
    ss->next = L->next;
    L->next = ss;
  }
  printf("now string is:");
  LinkNode* x= L->next;
  while(x!=NULL) {
    printf("%c", x->data); 
    x = x->next;
  }
  printf("\n");
}
