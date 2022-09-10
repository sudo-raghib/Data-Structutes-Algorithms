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

Node * segregateOddEven(Node * head)
{
    Node * odd=NULL;
    Node * even=NULL;
    Node * oddfirst=NULL;
    Node *evenFirst=NULL;
    bool firstOdd= true;
    bool firstEven=true;
    while(head!=NULL)
    {
        if(head->data%2==0)
        {
            if(firstEven)
            {
                even=head;
                evenFirst=head;
                firstEven=false;
            }
            else
            {   
                even->next=head;
                even=even->next;

            }    
        }
        else
        {
            if(firstOdd)
            {
                odd=head;
                oddfirst=odd;
                firstOdd=false;
            }
            else
            {
                odd->next=head;
                odd=odd->next;
            }    
        }
        head=head->next;   
    }
    if (oddfirst!=NULL)
    {
        if(evenFirst!=NULL)
        {    
            even->next=oddfirst;
            odd->next=NULL;
            return evenFirst;
        }    
        else
        {    
            odd->next=NULL;
            return oddfirst;
        }      
    }
    else
    {
        if(evenFirst!=NULL)
        {
            even->next=NULL;
            return evenFirst;
        } 
    }    

     

}
int main()  
{
    
    Node *head=new Node(15);
    head->next=new Node(20);
    head->next->next=new Node(3);
    
    head=segregateOddEven(head);
    traversingLinkedList(head);

} 