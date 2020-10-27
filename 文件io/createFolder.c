//create folder
#include <sys/stat.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
int main ()
{
  char txtname[100];
  if(access("flow",0)==-1){
    if(mkdir("flow",0777)){
      printf("failed");
    }
  }
}
