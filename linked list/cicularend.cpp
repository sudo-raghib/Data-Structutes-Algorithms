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
	Node *curr=ptr;
    
     if(curr==NULL)
    {
    	cout<<"NULL";
    } 
    do
    {
    	cout<<curr->data<<" ";
    	curr=curr->next;
    }while(curr!=ptr);
}
Node * insertTail(Node * head,int x)
{
	Node*curr=head;
	if(curr==NULL)
	{	
		curr=new Node(x);
	    curr->next=curr;
	    return curr;
	} 
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	curr->next=new Node(x);
	curr->next->next=head;
	return head;	
}
//for bego of 1
Node *inserttail(Node *head,int x)
{	

	if(head==NULL)
	{	
		head=new Node(x);
	    head->next=head;
	    return head;
	} 
	int temp;
	Node *newtail=new Node(x);
	temp=head->data;
	head->data=newtail->data;
	newtail->data=temp;
	newtail->next=head->next;
	head->next=newtail;
	return newtail;
}
int  main()
{
	Node*head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	head=inserttail(head,-100);
	traversingLinkedList(head);
}