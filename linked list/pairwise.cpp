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
Node * pairwise(Node * head,int k)
{   
    Node * curr=head;
    
    Node * NewFirstNode,First,prevFirst;
    bool isFirst=true;
    while(curr!=NULL)
    {  
        First=curr;
        Node * prev =NULL;
        while(curr!=NULL&& k>0)
        {
            
            Node * Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            k--;
        }
        k=2;
    
        if(isFirst)
        {
            NewFirstNode=prev;
            isFirst=false;
        }
        else
        {
            prevFirst->next=prev;
        }
        prevFirst=First;
    }
    return NewFirstNode;         
    
}    