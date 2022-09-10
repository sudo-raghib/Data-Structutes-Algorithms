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
void detectLoopFloyd(Node * head )
{   
    Node * slow=head;
    Node * fast=head;
    Node * prev;
    bool isFirst=true;
    while(fast!=NULL||fast->next!=NULL)
    {       
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
             {  
                slow=head;
                break;
             } 
    }
    if(slow!=head)
        return ;
    while(fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
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
    head->next->next->next->next->next->next->next=head;

    
    detectLoopFloyd(head);
    printlist(head);
    return 0;
}