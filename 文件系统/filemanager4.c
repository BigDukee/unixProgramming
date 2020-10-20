//chdir  change dir
//getcwd  get pwd

#include <stdio.h>
#include <unistd.h>

#define SIZE 4096

int main(void)
{
  char buf[SIZE];

  chdir("/");

  printf("%s\n", getcwd(buf, sizeof(buf)));

  return 0;
}
