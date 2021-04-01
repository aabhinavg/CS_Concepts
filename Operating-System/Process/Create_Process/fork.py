# Python code to create child process 
import os 

def parent_child(): 
	n = os.fork() 

	# n equals to zero  means that is child process 
	if n == 0: 
		print"Child process and id is : ", os.getpid()
                print"Child process parent is : ", os.getppid()
            

	# n  greater than 0 means a parent process
	else: 
		print"Parent process and id is : ", os.getpid()
		
# Driver code 
parent_child() 

