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
bool DetectLoop(Node * head)
{
    Node * temp;
    Node * Dummy=new Node(0);
    while(head!=NULL)
    {
        temp=head;
        head=head->next;
        if(temp->next==Dummy)
            return true;
        else
        {
            temp->next=Dummy;
        } 

    }
    return false; 
}
bool detectLoopFloyd(Node * head )
{   
    Node * slow=head;
    Node * fast=head;
    while(fast!=NULL||fast->next!=NULL)
    {   

        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
            return true;

    }
    return false;

}
int main() 
{ 
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=new Node(70);
    head->next->next->next->next->next->next->next=head->next->next;

    
    cout<<DetectLoop(head);
   
    return 0;
}