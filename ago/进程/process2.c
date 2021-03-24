//parents process
//child process
//fork() create child process

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (void)
{
  pid_t pid;
  pid = fork();

  if(pid>0){
    printf("parent\n");
    while(1);
  }
  else if(pid==0){
    printf("child\n");
    while(1);
  }
  else{
    perror("fork");
    exit(1);
  }
  return 0;
}
