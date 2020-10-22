//like "kill"
//send a signal to a process


#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
  if (argc<3){
    printf("./app pid");
    exit(-1);
  }
  if (kill((pid_t)atoi(argv[2]),atoi(argv[1]))<0){
    perror("kill");
    exit(1);
  }
  return 0;
}
