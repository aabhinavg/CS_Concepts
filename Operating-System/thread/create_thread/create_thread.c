#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
int sum;  //this data is shared by the thread
int *runner(int *param);	    
int main(int argc, char *argv[])
{
		pthread_t tid; 	// thread identifier
		int a;
		printf("Enter the value to find 1+2+3+4+...+value\n");
		scanf("%d",&a);
		if (a <0)
			{
				printf("Enter the postive number\n");
				return -1;
			}
		/*Create the thread*/
		printf ("creating thread\n");
		pthread_create(&tid,NULL,runner,(int *)&a);
		/*Wait for thread to exit*/
		pthread_join(tid,NULL);
		printf("= %d", sum);
		printf("\n");
			
}

/*Thread will begin control from this function*/
int *runner(int *param)
{
	printf("Inside the runner\n");
	int i, upper=*param;
	sum=0;
	for(i=1;i<=upper;i++)
	{
		sum+=i;
		if(i<=upper-1)
			printf("%d+",i);
	}
	printf("%d",upper);
	
}


