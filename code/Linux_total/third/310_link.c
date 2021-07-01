/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 00:04
 * Filename      : 310_link.c
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
  LinkNode* L = (LinkNode*)malloc(sizeof(LinkNode));
  L->next = NULL;
  char a[] = "abcdefghijk";
  for (int i=0; i<sizeof(a)-1; i++){
    s = (LinkNode *)malloc(sizeof(LinkNode));
    s->data = a[i];
    s->next = L->next;
    L->next = s;
  }

  printf("the list is:");
  LinkNode* p = L->next;
  while(p!=NULL) {
    printf("%c", p->data);
    p = p->next;
  }
  printf ("\n");

  int key = 3, pivot=0;
  LinkNode* h = L->next;
  LinkNode* t = L->next;
  while(h!=NULL){
    h = h->next;
    pivot++;
    if (pivot>key){
      t = t->next;
    }
  }
  printf("the last %dth is:%c\n", key, t->data);
}
