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
Node * delLastNode(Node* head)
{	
	Node * curr=head;
	Node *prev=NULL;
	if(curr==NULL)
	{
		return NULL;
	}
	else if(curr->next == NULL)
	{
		delete curr;
		delete head;
		return NULL;
	}	

	else
	{
		while(curr->next!=NULL)
		{	
			prev=curr;
			curr=curr->next;
		}
		
			
		prev->next=NULL;

		delete curr;
		return head;
	}	



	
	
}

int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	head=delLastNode(head);

	traversingLinkedList(head);

}