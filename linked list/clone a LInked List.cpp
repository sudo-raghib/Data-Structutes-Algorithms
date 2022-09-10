#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
        Random=NULL;
    }
};
void clone(Node * head)
{
    Node * curr=head;
    Node * newhead;
    bool first=true;
    while(curr!=NULL)
    {   
        Node * clonedLInkedList;
        if(first)
        {   
            newhead=new Node(curr->data);
            clonedLInkedList=newhead;
            first =false;

        }
        else
        {
            
            clonedLInkedList=new Node(curr->data);
        }
        clonedLInkedList=clonedLInkedList->next;
        curr=curr->next;  

    }
    while(curr!=NULL)
    {
        Node * currNew
    }   
}