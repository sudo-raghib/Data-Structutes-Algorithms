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
Node * Deletehead(Node *head)
{
	if(head==NULL)
		return head;
	else if(head->next==NULL)
	{
		delete head;
		return NULL;
	}
	else
	{
		Node * newhead=head->next;
		newhead->prev=NULL;
		delete head;
		return newhead;
	}	
}
int main()
{
	Node * head=new Node(10);
	head->next=new Node(20);
	head->next->prev=head;
	head->next->next=new Node(30);
	head->next->next->prev=head->next;
	head=Deletehead(head);
	traversingLinkedList(head);
}
