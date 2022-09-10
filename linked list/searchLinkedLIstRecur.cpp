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

int searching(Node *head,int x)
{	
	if(head==NULL)
		return 0;
	
	else
	{
		static int i=1;
		if(head->data==x)
			return i;
		i++;
		searching(head->next, x);

	}
	
}

	int main()
{
	

	//efficent
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	cout<<searching(head,50);

}
