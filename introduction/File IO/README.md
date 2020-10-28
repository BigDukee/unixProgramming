# 1.File IO

[TOC]



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

```c
       #include <stdio.h>

       int fflush(FILE *stream);

```



> ```c
>    For  output  streams, fflush() forces a write of all user-space buffered data for the given output or update stream via the stream's underlying write
>    function.
> 
>    For input streams associated with seekable files (e.g., disk files, but not pipes or terminals), fflush() discards any buffered data  that  has  been
>    fetched from the underlying file, but has not been consumed by the application.
> 
>    The open status of the stream is unaffected.
> 
>    If the stream argument is NULL, fflush() flushes all open output streams.
> ```

------

system calls used to control file I/O kernel buffering

```c
       #include <unistd.h>

       int fsync(int fd);

       int fdatasync(int fd);

```

> ```c
> fsync()  transfers ("flushes") all modified in-core data of (i.e., modified buffer cache pages for) the file referred to by the file descriptor fd to
> the disk device (or other permanent storage device) so that all changed information can be retrieved even if the system crashes or is rebooted.  This
> includes writing through or flushing a disk cache if present.  The call blocks until the device reports that the transfer has completed.
>
> As well as flushing the file data, fsync() also flushes the metadata information associated with the file (see inode(7)).
>
> Calling  fsync() does not necessarily ensure that the entry in the directory containing the file has also reached disk.  For that an explicit fsync()
> on a file descriptor for the directory is also needed.
>
> fdatasync() is similar to fsync(), but does not flush modified metadata unless that metadata is needed in order to allow a subsequent data  retrieval
> to  be  correctly  handled.   For  example, changes to st_atime or st_mtime (respectively, time of last access and time of last modification; see in‐
> ode(7)) do not require flushing because they are not necessary for a subsequent data read to be handled correctly.  On the other hand,  a  change  to
> the file size (st_size, as made by say ftruncate(2)), would require a metadata flush.
>
> The aim of fdatasync() is to reduce disk activity for applications that do not require all metadata to be synchronized with the disk.
> ```

------

a muxture of library functions and system calls for file I/O

```c
       #include <stdio.h>

       void clearerr(FILE *stream);

       int feof(FILE *stream);

       int ferror(FILE *stream);

       int fileno(FILE *stream);


```

> 

```c
   The function clearerr() clears the end-of-file and error indicators for the stream pointed to by stream.

   The  function  feof() tests the end-of-file indicator for the stream pointed to by stream, returning nonzero if it is set.  The end-of-file indicator
   can be cleared only by the function clearerr().

   The function ferror() tests the error indicator for the stream pointed to by stream, returning nonzero if it is set.  The error indicator can be  re‐
   set only by the clearerr() function.

   The  function  fileno()  examines  the argument stream and returns the integer file descriptor used to implement this stream.  The file descriptor is
   still owned by stream and will be closed when fclose(3) is called.  Duplicate the file descriptor with dup(2) before passing it to  code  that  might
   close it.
```
------

recommendations for I/O mode phase kernel

```c
       #include <fcntl.h>

       int posix_fadvise(int fd, off_t offset, off_t len, int advice);

```

> Programs  can  use posix_fadvise() to announce an intention to access file data in a specific pattern in the future, thus allowing the kernel to per‐
>        form appropriate optimizations.
>
> ```c
>    The advice applies to a (not necessarily existent) region starting at offset and extending for len bytes (or until the end of the file if len  is  0)
>    within the file referred to by fd.  The advice is not binding; it merely constitutes an expectation on behalf of the application.
> 
>    Permissible values for advice include:
> 
>    POSIX_FADV_NORMAL
>           Indicates that the application has no advice to give about its access pattern for the specified data.  If no advice is given for an open file,
>           this is the default assumption.
> 
>    POSIX_FADV_SEQUENTIAL
>           The application expects to access the specified data sequentially (with lower offsets read before higher ones).
> 
>    POSIX_FADV_RANDOM
>           The specified data will be accessed in random order.
> 
>    POSIX_FADV_NOREUSE
>           The specified data will be accessed only once.
> 
>           In kernels before 2.6.18, POSIX_FADV_NOREUSE had the same semantics as POSIX_FADV_WILLNEED.  This was probably a  bug;  since  kernel  2.6.18,
>           this flag is a no-op.
> 
>    POSIX_FADV_WILLNEED
>           The specified data will be accessed in the near future.
> 
>           POSIX_FADV_WILLNEED initiates a nonblocking read of the specified region into the page cache.  The amount of data read may be decreased by the
>           kernel depending on virtual memory load.  (A few megabytes will usually be fully satisfied, and more is rarely useful.)
> 
>    POSIX_FADV_DONTNEED
>           The specified data will not be accessed in the near future.
> 
>           POSIX_FADV_DONTNEED attempts to free cached pages associated with the specified region.  This is useful, for example,  while  streaming  large
>           files.  A program may periodically request the kernel to free cached data that has already been used, so that more useful cached pages are not
>           discarded instead.
> 
>           Requests to discard partial pages are ignored.  It is preferable to preserve needed data than discard unneeded data.  If the  application  re‐
>           quires that data be considered for discarding, then offset and len must be page-aligned.
> 
>           The  implementation may attempt to write back dirty pages in the specified region, but this is not guaranteed.  Any unwritten dirty pages will
>           not be freed.  If the application wishes to ensure that dirty pages will be released, it should call fsync(2) or fdatasync(2) first.
> ```

------

## 1.2 PCB

> ***Process Control Block*** (PCB, also called Task Controlling Block,[1] Task Struct, or Switchframe) is a **data structure** in the operating system kernel containing the information needed to manage a particular process. The PCB is "the manifestation of a process in an operating system

------



### 1.2.1 task_struct

------



### 1.2.2 files_struct

------

## 1.3 open/close