//close parrents read,close child write;
//parrents write str to pipe


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>

int main (void)
{
  int fd[2]; //fd[0]read,fd[1]write
  pid_t pid;
  char str[1024]="hello world!";
  char buf[1024]="!dlrow olleh";
  if(pipe(fd)<0){
    perror("pipe");
    exit(1);
  }
  pid=fork();
  if(pid>0){
    //parrents,close parrents read,close child write
    close(fd[0]);
    sleep(2);
    write(fd[1],str,strlen(str));
    wait(NULL);
  }
  else if(pid==0){
    int len;
    close(fd[1]);
    len = read(fd[0],buf,sizeof(buf));
    write(STDOUT_FILENO,buf,len);
  }
  else {
    perror("fork");
    exit(1);
  }
  return 0;
}
