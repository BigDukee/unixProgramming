/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-07-01 08:58
 * Filename      : 407_msgque1.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#include <signal.h>


int main()
{
  struct msgbuf {
    long mtypes;
    char buf[100];
  };

  key_t key;
  
}
