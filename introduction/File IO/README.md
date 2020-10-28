# File IO



## 1.1 The Difference between standard library functions and system calls

System calls and library calls are similar in that they are provided to application by the environment. The difference between the two is that system calls are implemented in kernel, whereas library calls are implemented in user space. To make a system call, application has to execute special hardware- and system- dependent instruction (usually an interrupt or special SYSENTER call) instruction, which triggers context switch and forwards control to he kernel. Library calls are, on the other hand, no different from regular function calls (the only difference is that code does not reside in main executable but in shared libraries).      --------stackoverflow



|  standard library functions       |       system calls        |
| :----------------------------: | :-----------------------: |
| The C library functions are the same in all versions of ANASI C compiler | The system calls for each |
|                                                              |                           |
|                                                              |                           |
|                                                              |                           |







