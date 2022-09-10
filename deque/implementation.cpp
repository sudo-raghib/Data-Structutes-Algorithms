#include<iostream>
using namespace std;
struct queue
{
	int front,size,cap;
	int * arr;
	queue(int x)
	{
		front =0;
		cap=x;
		size=0;
		arr=new int[cap];
	}
	int getRear()
	{
		return (front+size-1)%cap;

	}
	int getFront()
	{
		return front;
	}
	void pushRear(int x)
	{
		int rear=getRear();
		if(isFULL()==true){return;}
		rear=(rear+1)%cap;
		arr[rear]=x;
		size++;
		front++;

	}
	int popFront()
	{	
		int temp=arr[front];
		front =(front+1)%cap;
		size--;
		return temp;

	}
	void pushFront(int x)
	{
		if(isFULL()==true){return;}
		else if(front==0)
			front=cap-1;
		else
		{
			front--;
		}
		arr[front]=x;
		size++;		
	}
	int popRear()
	{
		
		{
			int temp=arr[getRear()];
			size--;
			return temp;
		}
	}
	bool isFULL()
	{
		if(size==cap){return true;}
		else{return false;}
	}
};
int main()
{
	queue q1(5);
	q1.pushFront(20);
	q1.pushRear(5);
	q1.pushFront(30);
	q1.pushRear(51);
	q1.pushFront(27);
	q1.pushRear(5);
	cout<<q1.popRear()<<endl;
	cout<<q1.popRear()<<endl;
	cout<<q1.popFront();
}