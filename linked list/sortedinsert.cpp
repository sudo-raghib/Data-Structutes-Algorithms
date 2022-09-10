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
Node *sortedInsert(Node * head,int x)
{	
	Node * curr=head;

	Node * temp=new Node(x);
	if(curr==NULL)
	{
		return temp;
	}
	else if(curr->data>x)
	{
		temp->next=curr;
		return temp;
	}
	else
	{
		while(curr->next!=NULL)
		{	
		
			if( curr->next->data>x)
			{
			
				temp->next=curr->next;
				curr->next=temp;
				return head;
			}
			
			curr=curr->next;


		}
		if(curr->next==NULL)
		{
			curr->next=temp;
			return head;
		}	
	}	
	
	
		
}
int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	head=sortedInsert(head,20);

	traversingLinkedList(head);

}