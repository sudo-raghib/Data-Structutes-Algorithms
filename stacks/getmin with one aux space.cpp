#include <bits/stdc++.h>
using namespace std;
struct MyStackArray{
    int *arr;
    int cap;
    int top;
    int getmin;

    MyStackArray(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    
    void push(int x){
        if(top==cap-1){cout<<"Stack is full"<<endl;return;}
        top++;
        
        if(top==0)
        {
            getmin=x;
        }    
        if(getmin>x)
        {
            arr[top]=2*x-getmin;
            getmin=x;
        }
        else
             arr[top]=x;


    }
    
    int pop(){
        int res;
        if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
        if(arr[top]<=getmin)
        {
            res =getmin;
            getmin=2*getmin-arr[top];
        }
        else
             res=arr[top];
        top--;
        return res;

    }
    
    int peek(){
        if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
        if(arr[top]<0)
        {
            return getmin;
        }    
        return arr[top];
    }
    
    int size(){
        return (top+1);
    }
    
    bool isEmpty(){
        return top==-1;
    }
    int Getmin()
    {
        return getmin;
    }
    
};
int main() 
{ 
    MyStackArray ts(5); 
    ts.push(5); 
    ts.push(10);
    ts.push(15);
    ts.push(11);
    ts.push(-70);
    cout<<ts.Getmin()<<endl; 
    cout <<ts.pop()<<endl;
    cout<<ts.Getmin()<<endl;
    ts.push(-30); 
    cout<<ts.Getmin()<<endl;
    cout <<ts.pop()<<endl; 
    cout<<ts.Getmin()<<endl;
    return 0; 
}