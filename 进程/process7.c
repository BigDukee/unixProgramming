//a program fork a parent and a child
//the child use exec to reload new program and replace now .bss, .data segment


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (void)
{
  pid_t pid;
  pid = fork();
  if (pid == 0){
    execl("/usr/bin/firefox","firefox","www.baidu.com",NULL);
  }
  else if(pid>0){
    while(1){
      printf("parent\n");
      sleep(1);
    }
  }
  else{
    perror("fork");
    exit(1);
  }
  return 0;
}
