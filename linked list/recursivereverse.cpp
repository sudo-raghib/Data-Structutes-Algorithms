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
Node *recRevL(Node *head){
    if(head==NULL||head->next==NULL)return head;
    Node *rest_head=recRevL(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

Node * reverse2(Node * head)
{
	static Node* prev =NULL;
	if(head==NULL)
	   return prev;
	Node * Next=head->next;
	head->next=prev;
	prev=head;
	reverse(Next);
    


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
	
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	
	head=reverse(head);
	traversingLinkedList(head);

} 