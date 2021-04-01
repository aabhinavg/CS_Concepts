#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main()
{
		pid_t fd;
		fd =fork();
		if(fd ==0)
		{
	
			std::cout<<"I am a child process\n My process id is "<<getpid()<<std::endl;
			std::cout<<"My parent is "<<getppid()<<std::endl;
		}
		else
			std::cout<<"I am a parent process\n Myprocess id is " <<getpid()<<std::endl;
		
}

      


