//blocked
//阻塞，read，当按回车键的时候，才打开
//若要是设计成非阻塞，则用while轮回查询


#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>


int main(void)
{
  char buf[1024];
  int len;

  len = read(STDIN_FILENO, buf, sizeof(buf));
  write(STDOUT_FILENO, buf, len);

  return 0;
}
