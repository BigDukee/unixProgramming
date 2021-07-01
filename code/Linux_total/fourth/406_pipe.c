/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 09:33
 * Filename      : 406_pipe.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
  int pi[2];
  pipe(pi);
  pid_t pid = fork();
  if (pid == 0){
    close(pi[1]);
    int fd = open("406",O_CREAT | O_RDWR | O_TRUNC, 0777);
    read(fd, buf, 1024);
  }else {
    char buf[1024];
    close(pi[0]);
    int fd = open("401", O_RDONLY);
    read (fd, buf, 1024);
    write(pi[1], buf, 1024);
  }

}
