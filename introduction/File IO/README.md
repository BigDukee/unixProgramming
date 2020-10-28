# 1.File IO



## 1.1 The Difference between standard library functions and system calls

> System calls and library calls are similar in that they are provided to application by the environment. The difference between the two is that system calls are implemented in kernel, whereas library calls are implemented in user space. To make a system call, application has to execute special hardware- and system- dependent instruction (usually an interrupt or special SYSENTER call) instruction, which triggers context switch and forwards control to he kernel. Library calls are, on the other hand, no different from regular function calls (the only difference is that code does not reside in main executable but in shared libraries). 



|                  standard library functions                  |                         system calls                         |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
| the C library functions are the same in all version of the ANSI C compiler |   the system calls for each operating system are different   |
|        it calls a program(or function) in the library        |          it calls the service of the system kernel           |
|               associated with the user program               |            an entry point to the operating system            |
|              executes in the user address space              |             executes in the kernel address space             |
|                     it runs in user time                     |                    it runs in system time                    |
|        belongs to procedure call, the overhead is low        | switch between user space and kernel context, the overhead is expensive |
| there are about 300 functions in the C function library libc |           there are about 90 system calls in UNIX            |
|       typical C library call: system, fprintf, malloc        |        typical system calls: chdir, fork, write, brk         |
|                   head file : stdio.h ....                   |                   head file: unistd.h ...                    |
|  there is generally no portability across operating systems  | library function calls are system-independent and therefore portable |



### 1.1.1 I/O buffer

> I/O is really slow, for the (O)utput part, having a buffer lets the CPU send the info to the device and pretend that it is finished so that it can move onto the next thing without wasting time sitting around to feed the information to the device at the proper speed.
>
> From the (I)nput perspective, signals don't necessarily arrive when the CPU is ready for them, so the signals need to be stored somewhere so that they can be handled by the CPU. A buffer makes it so that none of the incoming Input signal is lost while the CPU context switches to handle the incoming signal.                                            

------

Each FILE stream has a buffer, with a default size of 8192 Byte.

------

set the stdio stream buffer mode

```c
       #include <stdio.h>

       void setbuf(FILE *stream, char *buf);

       void setbuffer(FILE *stream, char *buf, size_t size);

       void setlinebuf(FILE *stream);

       int setvbuf(FILE *stream, char *buf, int mode, size_t size);

```

> ```c
>    The setvbuf() function may be used on any open  stream  to  change  its
>    buffer.  The mode argument must be one of the following three macros:
> 
>           _IONBF unbuffered
> 
>           _IOLBF line buffered
> 
>           _IOFBF fully buffered
> ```

------

refresh the stdio buffer