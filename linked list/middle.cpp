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
void traversingLinkedList(Node * ptr)
{
	if(ptr!=NULL)
	{	
		cout<<ptr->data<<" ";
		traversingLinkedList(ptr->next);
	}
	else
	{
		cout<<"NULL";
	}	

}
int middle(Node * head)
{	
	Node * curr=head;
	int temp=0;
	int datanode;
	if(curr==NULL)
		return 0;

	while(curr!=NULL)
	{
		curr=curr->next;
		temp+=1;
	}
		
		
	for(int i=1;i<=temp/2+1;i++)
	{
		datanode=head->data;
		head=head->next;


	}
		return datanode;
			
}
// efficient
int middle2(Node * head)
{	

	Node * slow=head;
	Node *fast =head;
	if(head==NULL)
		return 0;
	
    while(fast->next!=NULL && fast!=NULL)
	{
			slow=slow->next;
			fast=fast->next->next;
	}
	return slow->data;
}
int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	cout<<middle2(head);

	

}