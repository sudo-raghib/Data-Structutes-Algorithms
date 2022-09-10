#include<iostream>
using namespace std;
struct queue
{
	int *arr;
	int front,rear,cap;
	queue(int cap1)
	{	
		cap=cap1;
		arr=new int[cap];
		front=-1;
		rear=-1;
	}
	void enqueue(int x)
	{	
		if(rear==cap-1)
		{
			cout<<"Queue FULL";
			return ;
		}		
		rear++;
		if(front==-1)
			front=rear;
		arr[rear]=x;

	}
	int dequeue()
	{	
		if(rear<0)
			return 0;
		int temp;
		for(int i=0;i<rear;i++)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		temp=arr[rear];
		rear--;
		return temp;
	}
	int getfront()
	{
		if(rear<0)
		{
			cout<<"Empty Queue";
			return 0;
		}
		else
			return arr[front];
	}
	int getRear()
	{
		if(rear<0)
		{	
			cout<<"Empty Queue";
			return 0;
		}	

		else
			return arr[rear];
				
	}
	bool isFull()
	{
		if(rear==cap-1)
			return true;
		else 
			return false;

	}
	int size()
	{
		if(rear<0)
		{
			cout<<"Empty Queue";
			return 0;
		}
		else
		{
			return rear;
		}	

	}


};
//efficient(circular array)
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
	bool isFULL()
	{
		if(size==cap){return true;}
		else{return false;}
	}
};
int main()
{
	queue q1(5);
	q1.enqueue(5);
	q1.enqueue(10);
	q1.enqueue(50);
	q1.enqueue(-90);
	cout<<q1.dequeue()<<endl;
	cout<<q1.dequeue()<<endl;
	cout<<q1.getfront()<<endl;
	cout<<q1.getRear()<<endl;
	q1.enqueue(3);
	q1.enqueue(2);

}