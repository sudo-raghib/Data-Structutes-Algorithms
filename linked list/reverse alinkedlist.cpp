#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *revList(Node *head){
    vector<int> arr;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}
//iterative effective
Node * revlist(Node * head)
{
	if(head->next==NULL)
		return head;
	else if(head==NULL)
		return NULL;
	Node * curr=head->next;
	Node * prev=head;
	prev->next=NULL;
	
	while(curr!=NULL)
	{
		Node * Next =curr->next;
		curr->next=prev;
		prev=curr;
		curr=Next;

	}
	return prev;	
}
int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=revlist(head);
	printlist(head);
	return 0;
} 
