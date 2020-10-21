//output pip.length & filename.length


#include <stdio.h>
#include <unistd.h>

int main (void)
{
  int fd[2];
  pipe(fd);
  printf("pipe buf %ld\n",fpathconf(fd[0],_PC_PIPE_BUF));
  printf("%ld\n",fpathconf(STDOUT_FILENO,_PC_NAME_MAX));
  printf("%ld\n",pathconf("hello",_PC_NAME_MAX));

  return 0;
}
