#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node * next;
	Node(int x)
	{
		data =x;
		next=NULL;
	}
};

struct MyStackArray{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    
    void push(int x){
        if(top==cap-1){cout<<"Stack is full"<<endl;return;}
        top++;
        arr[top]=x;
    }
    
    int pop(){
        if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
        int res=arr[top];
        top--;
        return res;
    }
    
    int peek(){
        if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
        return arr[top];
    }
    
    int size(){
        return (top+1);
    }
    
    bool isEmpty(){
        return top==-1;
    }
};

struct MyStackVector{
    vector<int> v;
    
    void push(int x){
        v.push_back(x);
    }
    
    int pop(){
        int res=v.back();
        v.pop_back();
        return res;
    }
    
    int peek(){
        return v.back();
    }
    
    int size(){
        return v.size();
    }
    
    bool isEmpty(){
        return v.empty();
    }
};
struct myStackLinkedList
{
	Node * head;
	int count;
	myStack3()
	{
		count=0;
		head=NULL;
	}
	void push(int x)
	{
		Node * temp=new Node(x);
		temp->next=head;
		head=temp;
		count++;

	}
	int pop()
	{
		if(head==NULL)
			return INT_MAX;
		int res=head->data;
		Node * temp=head;
		head=head->next;
		delete temp;
		count--;
		return res;
		

	}
	int size()
	{
		return count;
	}
	int peek()
	{
		if(head==NULL)
			return INT_MAX;
		return head->data;
	}
	bool isEmpty()
	{
		if(count==0)
			return false;
		else 
			return true;
	}
};

int main()
{
    myStack3 s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
  
    return 0; 
}