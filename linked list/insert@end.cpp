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

}

Node *  insert_end(Node *ptr,int x)
{	
	Node * temp=new Node(x);
	if(ptr ==NULL)
	
		return temp;
	Node * curr=ptr;
	
	while(curr->next!=NULL)
		curr=curr->next;
	curr->next=temp;
	return ptr;
}



int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	insert_end(head,100);

	traversingLinkedList(head);
}