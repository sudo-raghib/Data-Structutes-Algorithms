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
		prev=NULL;
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
Node * Deletelast(Node *head)
{
	Node * newhead=head;
	if(head==NULL)
		return head;
	else if(head->next==NULL)
	{
		delete head;
		return NULL;
	}
	while(newhead->next!=NULL)

	{	
		newhead=newhead->next;
		
	}
	newhead->prev->next=NULL;
	delete newhead;
	return head;

}
int main()
{
	Node * head=new Node(10);
	head->next=new Node(20);
	head->next->prev=head;
	head->next->next=new Node(30);
	head->next->next->prev=head->next;
	head=Deletelast(head);
	traversingLinkedList(head);
}
