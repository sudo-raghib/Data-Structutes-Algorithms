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
Node * removeDuplicates(Node * head)
{	
	Node* newhead;
	Node * prev=NULL;
	while(head!=NULL)
	{
		if(head->next!=NULL)
		{	
			if(head->data==head->next->data)
			{
				Node * temp=head->next;
				delete head;
				Node * head=temp;
		    
			}
		}	
		else if(prev==NULL)
		{
			prev=head;
			newhead=prev;
			head=head->next;
			
		}
		else
		{	
			prev=prev->next;
			prev=head;
			head=head->next;

		}
		prev->next=NULL;	
	}
	return newhead;	
}
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

	int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	head=removeDuplicates(head);
	traversingLinkedList(head);

	

}
