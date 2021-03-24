//change pipe nonblock
//fcntl set O_NONBLOCK


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
int main(void)
{
  int fd[2];
  char str[1024]="hello world!";
  char buf[1024];
  pid_t pid;
  if(pipe(fd)<0){
    perror("pipe");
    exit(1);
  }
  pid=fork();
  if (pid>0){
   close(fd[0]);
   sleep(5);
   write(fd[1],str,strlen(str));
   close(fd[1]);
   wait(NULL);
  }
  else if(pid==0){
    int len,flags;
    close(fd[1]);

    flags=fcntl(fd[0],F_GETFL);
    flags |= O_NONBLOCK;
    fcntl(fd[0],F_SETFL,flags);
tryagain:
    len=read(fd[0],buf,sizeof(buf));
    if(len==-1){
      if(errno==EAGAIN){
        write(STDOUT_FILENO,"try again\n",10);
        sleep(1);
        goto tryagain;
      }
      else {
        perror("read");
        exit(1);
      }

    }
    write(STDOUT_FILENO,buf,len);
    close(fd[0]);
  }
  else{
    perror("fork");
    exit(1);
  }
  return 0;

}
