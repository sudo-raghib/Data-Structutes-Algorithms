#include<iostream>
#include<deque>
using namespace std;
struct DesignDataStructure
{

	deque<int> d;
	void insertMin(int x)
	{	
		if(d.empty()==true){d.push_front(x);}
		else if(d.back()>x)
		{
			d.push_back(x);
		}
		else{return ;}
	}
	void insertMax(int x)
	{
		if(d.empty()==true){d.push_front(x);}
		else if(d.front()<x)
		{
			d.push_front(x);
		}
		else{return ;}	
	}
	int getMin()
	{
		return d.back();
	}
	int getMax()
	{
		return d.front();
	}
	int extractMin()
	{
		if(d.empty()==true){return 0;}
		int t=d.back();
		d.pop_back();
		return t;
	}
	int extractMax()
	{
		if(d.empty()==true){return 0;}
		int t=d.front();
		d.pop_front();
		return t;
	}
		
};
int main()
{	
	DesignDataStructure temp1;
	temp1.insertMin(5);
	temp1.insertMax(10);
	temp1.insertMin(3);
	temp1.insertMax(15);
	temp1.insertMin(2);
	cout<<temp1.getMin()<<endl;
	cout<<temp1.getMax()<<endl;
	temp1.insertMin(1);
	cout<<temp1.getMin()<<endl;
	temp1.insertMax(20);
	cout<<temp1.getMax()<<endl;
	cout<<temp1.extractMax()<<endl;
	cout<<temp1.extractMax()<<endl;
	cout<<temp1.extractMin()<<endl;


}