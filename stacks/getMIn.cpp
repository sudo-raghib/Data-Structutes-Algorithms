#include <bits/stdc++.h>
using namespace std;
struct MyStackArray{
    int *arr;
    int cap;
    int top;
    int *min;
    int getmin;

    MyStackArray(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
        min=new int[cap];
       
        getmin=9999999;

    }
    
    void push(int x){
        if(top==cap-1){cout<<"Stack is full"<<endl;return;}
        top++;
        arr[top]=x;
        if(getmin>x)
          getmin=x;
        min[top]=getmin;


    }
    
    int pop(){

        if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}   
        int res=arr[top];
        top--;
        getmin=min[top];
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
    int Getmin()
    {
        return min[top];
    }
};
int main() 
{ 
    MyStackArray ts(5); 
    ts.push(5); 
    ts.push(10);
    ts.push(15);
    ts.push(11);
    ts.push(3);
    cout<<ts.Getmin()<<endl; 
    cout <<ts.pop()<<endl;
    cout<<ts.Getmin()<<endl;
    ts.push(2); 
    cout<<ts.Getmin()<<endl;
    cout <<ts.pop()<<endl; 
    cout<<ts.Getmin()<<endl;
    return 0; 
}