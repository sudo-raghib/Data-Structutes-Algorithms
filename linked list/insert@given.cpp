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
Node * insertAtGiven(Node*ptr,int x,int index)
{		
		int temp=0;
		Node*curr=ptr;
		for(int i=1;i<index-1  ;i++)
		{	
			int temp=1;
			if(curr->next->next==NULL)
				return ptr;
			curr=curr->next;


		}
		if( temp==1)
		{
			Node *temp=curr->next;
			curr->next=new Node( x);
			curr->next->next=temp;
			return ptr;
		}
		else 
		{
			Node * temp=new Node( x);
			temp->next=curr;
			return temp;
		}	


}
int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	head=insertAtGiven(head,100,100);

	traversingLinkedList(head);

}