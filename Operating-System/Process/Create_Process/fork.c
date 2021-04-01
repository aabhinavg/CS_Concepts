#include <sys/types.h>   /*Header file containing fork defination*/
#include <unistd.h>       /*Header file containing fork defination*/
#include <stdio.h>
int main()
{
		pid_t fd;					/*data type for process id pid_t process identification and it is used to represent process id*/
		fd =fork();					/*calling fork system call to make new process*/
		if(fd ==0)					/*fd ==0 for child process && fd>0 for parent processs fd <0 process not created error*/
		{
	
			printf("I am a child process\n My process id is %ld\n",(long)getpid());				/*getpid() used to get id of current running process*/
			printf("My parent is %ld\n",(long)getppid());		                                        /*getppid() used to get pid of the parent process of the child process*/
		}
		else
			printf("I am a parent process\n Myprocess id is %ld", (long)getpid());
		
}

      


