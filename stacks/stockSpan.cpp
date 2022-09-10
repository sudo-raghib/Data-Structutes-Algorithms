#include <bits/stdc++.h>
using namespace std;


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
int* StockSpan(int arr[],int length)
{
    int * Span=new int[length];
    for(int i=0;i<10;i++)
    {
        Span[i]=0;
    }  
    
    for(int i=0;i<length;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j]<=arr[i])
            {
                Span[i]++;
            }
            else
                break;
        }    
    }
    return Span;
}

//efiicient
void printSpan(int arr[],int n){
    
    stack<int> s ;
    s.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span=s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}
int main()
{
    int Arr[]={13,15,12,14,16,8,6,4,10,30};
    int * Spanptr;
    Spanptr=StockSpan(Arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<Spanptr[i]<<" ";
    }    
}