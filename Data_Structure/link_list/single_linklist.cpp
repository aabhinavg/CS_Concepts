#include <iostream>
using namespace std;

struct Node {					//link list defination
	int data;
	struct Node *next;			
};

struct Node *start =NULL;			//starting element of the link list declared globally so that all function can access it 

void insert(int data)				//insertion from begining
{
	struct Node *head =(struct Node *)malloc(sizeof(struct Node));
	head->data =data;
	head->next= start;
	start=head;
}
void display(){					//displaying link list
	struct Node *ptr;
	ptr=start;
	while(ptr !=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
void reverse(struct Node *ptr)			//printing data of link list in reverse order
{
	if(ptr==NULL)
		return;
	reverse(ptr->next);
	cout<<ptr->data<<" ";

	
		
}
int main()
{
	int total;
	cout<<"Enter the total number of element you want insert from begining inside link list"<<endl;
	cin >>total;
	if (total ==0)
		{
			cout<<"No element inside the link list to insert"<<endl;
			return total;
		}
	if (total <0)
		{
			cout <<"Element cant be less than zero"<<endl;
			return 0; 
		}
	for (int i=0;i<total;i++)
	{

		int value;
		cout<<"Enter the value of number"<<endl;
		cin>>value;
		insert(value);
	}
	cout <<"The link list is --->";
	display();
	cout<<endl;
	cout<<"Link list in reverse order is--> ";
	reverse(start);
	cout<<endl;
	return 0;
}

