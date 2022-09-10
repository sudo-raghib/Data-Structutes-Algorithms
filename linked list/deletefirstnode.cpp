#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node*next;
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
Node * delFirstNode(Node*ptr)
{
	if(ptr==NULL)
	{
		cout<<"NULL";
	}
	Node * newhead=ptr->next;
	ptr=NULL;//delete ptr
	return newhead;	
}

int main()
{
	

	//efficent
	Node *head=new Node(10);
	
	head=delFirstNode(head);

	traversingLinkedList(head);
}