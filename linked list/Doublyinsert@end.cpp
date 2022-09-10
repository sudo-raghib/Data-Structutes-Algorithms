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
Node *insert_end(Node *head,int data)
{	
	Node * curr=head; 
	if(curr==NULL)
	{
		head=new Node(data);
		return head;
	}	

	while(curr->next!=NULL)
	{
		curr=curr->next;
	}


	curr->next=new Node(data);
	curr->next->prev=curr;
	return head;
}
int main()
{
	Node * head=new Node(10);
	head->next=new Node(20);
	head->next->prev=head;
	head->next->next=new Node(30);
	head->next->next->prev=head->next;
	head=insert_end(head,-16);
	traversingLinkedList(head);
}