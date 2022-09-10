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
Node *  deleteKth(Node * head,int Kth)
{
	Node * curr= head;
	Node * temp =NULL;
	int t=1;
	for(int  i=1;i<Kth-1;i++)
	{
		curr=curr->next;
		t=0;


	}
	if(t==0)
	{	
		temp=curr->next->next;
		delete curr->next;
		curr->next=temp;
		return head;
	}	
	else if(t==1)
	{
	 	if(head->next==head)
		{
			delete head;
			return NULL;
		}
	    else
	    {	
	    	
			curr->data=curr->next->data;
			temp=curr->next;
			curr->next=curr->next->next;
			delete temp;
			return curr;
		}	
	}




}
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
int  main()
{
	Node*head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	head=deleteKth(head,3);
	traversingLinkedList(head);
}
