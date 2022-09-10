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
int intersection(Node * head1,Node * head2)
{
    int count1=0;
    int count2=0;
    int d=0;
    Node * curr1=head1;
    Node * curr2=head2;
    while(curr1!=NULL);
    {
        count1++;
        curr1=curr1->next;
    }
    while(curr2!=NULL)
    {
        count2++;
        curr2=curr2->next;
    }
    curr1=head1;
    curr2=head2;
    if(count1>count2)
    {   
        d=count1-count2;
        while(d>1)
        {
            curr1=curr1->next;
            d--;
        } 
    }
    else
    {       
        d=count2-count1;
        while(d>1)
        {
            curr2=curr2->next;
            d--;
        }
        
    }
    
    while(curr1!=NULL && curr2 !=NULL) 
    {       
        cout<<1;
        if(curr1==curr2)
            return curr1->data;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return 0; 

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
    Node * head2=head->next->next;

    
    cout<<intersection(head,head2);
   
    return 0;
}