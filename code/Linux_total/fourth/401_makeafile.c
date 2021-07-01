/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-25 00:05
 * Filename      : 401_makeafile.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
  char buf[1000];
  int i=sizeof(buf), k=0;
  while (i){
    for (int j=0; j<26; j++){
      buf[k] = 'a'+j;
      k++;
      if (j==25){
        j=0;
      }
      i--;
      if (i==0)
        break;
    }
  }
  printf("%s\n", buf);
  int fd = open("401", O_CREAT | O_RDWR | O_TRUNC, 0777);
  write(fd, buf, sizeof(buf));

}
