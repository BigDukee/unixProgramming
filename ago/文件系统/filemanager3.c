//chmod

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main (int argc, char *argv[])
{
  int mode;
  if (argc<3){
    printf("./mychmod mod filename\n");
    exit(1);
  }

  mode = atoi(argv[1]);          //bug
  chmod(argv[2],mode);

  return 0;
}
