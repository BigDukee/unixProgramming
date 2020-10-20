//exec
//exec replace the text segment
//.text contain hello,/bin/ls,world;
//but when the program start, print hello,and execl replace all the text
//there no world!


#include <stdio.h>
#include <unistd.h>


int main (void)
{
  printf("hello\n");

  execl("/bin/ls","ls","-l",NULL);

  printf("world\n");

  return 0;
}
