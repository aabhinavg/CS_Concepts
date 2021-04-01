
### fork System call
This repositroy talks about fork system call in <b>LINUX/UNIX.</b> </br>
When a process is under execution then their may be chances that process creates new process.The process which create other process is called <b>parent process</b> and the new process which is created is called <b>child process</b>. Each process may again create new process forming a <b>tree of process</b>
Most operating system such as UNIX,LINUX,Windows identify process according to their <b>unique process identifier(PID)</b> In this repository we are talking about UNIX/LINUX OS.
</br>

On UNIX/LINUX system we obtain a list of the process by using ps command . for example
      <pre> ps -el 
      This command will list all process currently active in system</pre>
<b>INIT</b> process always has a PID 1 serves as a root <b>parent process</b> for all user process.
When system boot from that instance INIT process may create several new process, such as web or print server,an ssh server,kthreadd,systemd etc.
Here kthread process has given responsibility to create additional process that perform tasks on behalf of kernel.</br>
Whenever process create a child process, that child process which is created will need certain resources to perform or to accomplish its task.
Parent process may have to partition its resource among its children.</br>
When a process creates new process , two possibility for execution exit
<pre>
1. The parent continues to execute concurrently with its children.
2. The parent wait until some or all its children have terminated.
</pre>

Their are also two address-space possibilities for new process
<pre>
1.The </b>child process</b> is duplicate of the parent process (it has  same program and data that as the parent).
2.The child program has a new program loaded into it.
</pre>

To know more about above mentioned differences lets talk about UNIX/LINUX OS.
- In UNIX/LINUX OS we have already discussed that each process is identified by its process id.
- A new process is created using <b>fork()</b> system call. 
-      #include <sys/types.h>
       #include <unistd.h>
        pid_t fork(void);
       you can see more by using man fork command of LINUX OS.
- The new process consist of a copy of the address space of original process.
- Both the process ( parent and child ) continue execution the instruction after the fork(), with one difference of return value for the fork() is      zero for child process and a >0 value by the parent.
-       #include <sys/types.h>
        #include <unistd.h>

       pid_t getpid(void);
       pid_t getppid(void);
       getpid() returns the process ID (PID) of the calling process.  (This is
       often used by routines that generate unique temporary filenames.)

       getppid() returns the process ID of the parent of the calling  process.
       This will be either the ID of the process that created this process us‐
       ing fork(),
       for  more see man getpid

### How to run
- Clone the repository
- run make command inside Create_process folder 


