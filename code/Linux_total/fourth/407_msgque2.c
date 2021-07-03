/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-07-01 08:58
 * Filename      : 407_msgque1.c
 * Description   : 
 * *******************************************************/


#include <stdio.h>
#include <unistd.h>
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

  int size = sizeof(struct msgbuf)-sizeof(long);
  key_t key;
  key = ftok(".", 'a');
  int msqid;
  struct msgbuf msg_snd, msg_rcv;
  msqid = msgget(key, IPC_CREAT | IPC_EXCL | 0664);

  pid_t pid=fork();
  if (pid==0) {
    while(1) {
      msg_snd.mtypes = 100;
      fgets(msg_snd.buf, 128, stdin);
      msg_snd.buf[strlen(msg_snd.buf)-1] = '\0';
      msgsnd(msqid, &msg_snd, size, 0);
      if (strncmp(msg_snd.buf, "quit", 4) == 0) {
        kill(getppid(), SIGKILL);
        break;
      }
    }
  } else {
    while (1) {
      msgrcv(msqid, &msg_rcv, size, 200, 0);
      if (strncmp(msg_rcv.buf, "quit", 4) == 0) {
        kill(pid, SIGKILL);
        msgctl(msqid, IPC_RMID, NULL);
      }
    }
    printf ("msg_b:%s\n", msg_rcv.buf);
  }
}
