#include<iostream>
#include<queue>
using namespace std;
struct stack
{	
	queue<int> q1;
	void push(int x)
	{
		q1.push(x);
	}
	int pop()
	{
		if(q1.empty()==true)
		{
			cout<<"Stack Empty";
			return 0;
		}
		else
		{	
			int t;
			int temp=q1.size();
			for(int i=1;i<=temp;i++)
			{
			    t=q1.front();
			    q1.pop();
				if(i<temp)
					q1.push(t);
		
			}
			return t;
		}
	}

};
//GFG
/* Program to implement a stack using 
two queue */ 

struct  Stack { 

	queue<int> q1, q2; 
	int curr_size; 

public: 
	Stack() 
	{ 
		curr_size = 0; 
	} 

	void push(int x) 
	{ 
		curr_size++; 

		// Push x first in empty q2 
		q2.push(x); 

		// Push all the remaining 
		// elements in q1 to q2. 
		while (!q1.empty()) { 
			q2.push(q1.front()); 
			q1.pop(); 
		} 

		// swap the names of two queues 
		queue<int> q = q1; 
		q1 = q2; 
		q2 = q; 
	} 

	void pop() 
	{ 

		// if no elements are there in q1 
		if (q1.empty()) 
			return; 
		q1.pop(); 
		curr_size--; 
	} 

	int top() 
	{ 
		if (q1.empty()) 
			return -1; 
		return q1.front(); 
	} 

	int size() 
	{ 
		return curr_size; 
	} 
}; 

 
int main() 
{ 
	Stack s; 
	s.push(10); 
	s.push(5); 
	s.push(15); 
	s.push(20);

	cout << "current size: " << s.size() << endl; 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 

	cout << "current size: " <<  s.size() << endl; 
	return 0; 
} 


int main()
{
	stack s1;
	s1.push(10);
	s1.push(20);
	s1.push(15);
	cos1.pop();
	s1.push(-6);
	s1.push(30);
	cout<<s1.pop();
	cout<<s1.pop();
	cout<<s1.pop();
}