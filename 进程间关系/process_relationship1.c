//the filename of the device for different terminals


#include <unistd.h>
#include <stdio.h>

int main()
{
  printf("fd 0 : %s\n",ttyname(0));
  printf("fd 1 : %s\n",ttyname(1));
  printf("fd 2 : %s\n",ttyname(2));
  return 0;
}
