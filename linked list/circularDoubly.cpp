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

Node * insertatFirst(Node *head,int x)
{	
	Node *temp=new Node(x);
	temp->prev=head->prev;
	temp->next=head;
	head->prev->next=temp;
	head->prev=temp;
	return temp;
}
int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->prev=head;
	head->next->next=new Node(30);
	head->next->next->prev=head->next;
	head->next->next->next=head;
	head->prev=head->next->next;
	head=insertatFirst(head,25);
	traversingLinkedList(head);
}	