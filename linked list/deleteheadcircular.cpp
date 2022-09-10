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
Node * deleteHead(Node* head)
{
	
	if(head==NULL)
	{	
		return NULL;
	}

	else if(head->next==head)
	{
		delete head;
		return NULL;
	}
	Node*curr=head;	
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	curr->next=head->next;
	delete head;
	return curr->next;
	
    

}
// effective

Node *deletehead(Node *head)
{	

	Node*curr=head;
	if(head==NULL)
	{	
		
	    return NULL;
	}
	else if(head->next==head)
	{
		delete head;
		return NULL;
	}

	
	else if(curr->next->next==curr)
	{
		int temp;
		curr->data=curr->next->data;
		delete curr->next;
		curr->next=curr;
		return curr; 
	}	
	
	Node *tempnode;
	curr->data=curr->next->data;
	tempnode=curr->next;
	curr->next=curr->next->next;
	delete tempnode;
	return curr;
}

int  main()
{
	Node*head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	head=deletehead(head);
	traversingLinkedList(head);
}