#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data =x;
		next=NULL;
	}

	
};
void traversingLinkedList(Node * ptr)
{	
	Node * curr=ptr;
	while(curr!=NULL)
	{	
		cout<<ptr->data;
		curr=curr->user;
	}	

}