//getchar to get a input things
//toupper change lowercase to capital


#include <stdio.h>

int main(void)
{
  int ch;
  while((ch=getchar())!=EOF){
    putchar(toupper(ch));
  }
  return 0;
}
