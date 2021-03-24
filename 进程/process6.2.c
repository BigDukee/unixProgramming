//load a program
//this program is return from test

#include <stdio.h>
#include <unistd.h>


int main (void)
{
  printf("hello\n");

  //execl("/bin/ls","ls","-l",NULL);
  execl("/home/yang/Desktop/123/app","./app","a.c","b.c","c.c",NULL);

  //it's finish!!!!
  printf("world\n");

  return 0;
}
