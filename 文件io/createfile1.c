//����һ���ļ���������abs�����Ҹ�Ȩ777������Ҫ���ݵ�ʱ��umaskֵ


#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>



int main(void)
{
  int fd;
  fd = open("abs",O_CREAT,0777);
  printf ("fd = %d\n",fd);

  return 0;
}
