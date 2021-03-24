//memory map
//mmap map a zone from disk to memory
//munmap ensure the size of memory


#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <stdlib.h>


void sys_err(char *str,int exitno)
{
  perror(str);
  exit(exitno);
}



int main(void)
{
 int fd,len;
 int *p;
 fd=open("hello",O_RDWR);
 if(fd<0)
   sys_err("open",1);
 len=lseek(fd,0,SEEK_END);
 p=mmap(NULL,len,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
 if(p==MAP_FAILED)
   sys_err("mmap",1);


 close(fd);
 p[0]=0x30313233;

 munmap(p,len);
 return 0;
}
