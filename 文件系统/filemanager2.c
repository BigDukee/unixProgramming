//Trace symbolic link
//access
//F_OK check for present

#include <stdio.h>
#include <unistd.h>


int main(void)
{
  if(access("abc", F_OK) < 0)
  {
    perror("abc");
    exit(1);
  }

  printf("abc is ok\n");
  return 0;
}
