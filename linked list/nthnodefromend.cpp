#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node*next;
	Node *prev;
	Node(int x)
	{
		data =x;
		next=NULL;
	}	
};
int nthNodeFromEnd(Node *head,int x)
{
	Node *slow=head;
	Node *fast=head;
	if(head==NULL)
		return 0;
	for(int i=1;i<=x;i++)
	{
		if(i!=x && fast->next==NULL)
		{
			return 0;
		}	
		fast=fast->next;


	}
	while(fast!=NULL)
	{
		slow=slow->next;
		fast=fast->next;
	}
	return slow->data;
}
int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	cout<<nthNodeFromEnd(head,2);

	

}