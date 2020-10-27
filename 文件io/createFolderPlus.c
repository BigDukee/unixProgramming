//create folder and create file
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

  char pathname[100];
  pathname[0]='f';
  
  int i=0;
  for (;txtname[i]!='\0';i++){
    int j=6+i;
    pathname[j]=txtname[i];
  }
  pathname[i+6]='.';
  pathname[i+7]='t';
  pathname[i+8]='x';
  pathname[i+9]='t';
  pathname[i+10]='\0';

  FILE *fp;
  if((fp=fopen(pathname,"w"))==NULL){
    printf("nothing\n");
  }
  fprintf(fp,"successs!");
  fclose(fp);
  return 0;
}
