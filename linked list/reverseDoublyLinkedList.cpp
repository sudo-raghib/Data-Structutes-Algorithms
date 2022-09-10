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
Node *reverse(Node *head)
{
	if(head==NULL)
	{
		return head;
	}

	while(true)
	{
		if(head!=NULL)
		{	
			Node * temp=head->prev;
			head->prev=head->next;
			head->next=temp;
			if(head->prev==NULL)
				return head;
			else
				head=head->prev;

		}
		
	}
	
}
int main()
{
	Node * head=new Node(10);
	head->next=new Node(20);
	head->next->prev=head;
	head->next->next=new Node(30);
	head->next->next->prev=head->next;
	head=reverse(head);
	traversingLinkedList(head);
}
