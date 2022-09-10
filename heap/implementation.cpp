#include<iostream>
using namespace std
class minHeap()
{	
	int index;
	int *heap;
	int capacity;
	minHeap(int cap)
	{
		index=0;
		heap=new int[cap];
		capacity=cap;
	}
	void insert(int item)
	{	if(index!=capacity)				
		{	
			if(index==0 || arr[index-1]<item)
			{
				heap[index]=item;
				index++;
			}	
		}		
	}
	int left(int i)
	{
		return 2*i+1;
	}
	int right(int i)
	{
		return 2*i+2;
	}
	int parent(int i)
	{
		return (i-1)/2;
	}


};
void heapify(minHeap temp,int wrongNodeIndex)
{	
	if(temp.arr[wrongNodeIndex]==temp.capacity)
		return 0;
	if(temp.arr[wrongNodeIndex]>temp.arr[temp.left( wrongNodeIndex)])
	{
		if(temp.arr[temp.left(wrongNodeIndex)]>temp.arr[temp.right(wrongNodeIndex)])
			swap(temo.arr[wrongNodeIndex],temp.arr[temp.left( wrongNodeIndex)]]);
			heapify(temp,temp.left( wrongNodeIndex));
		else
			swap(temo.arr[wrongNodeIndex],temp.arr[temp.right( wrongNodeIndex)]])
			heapify(temp,temp.right( wrongNodeIndex));
				
	}	
	else if(temp.arr[wrongNodeIndex]>temp.arr[temp.right(wrongNodeIndex)])
	{
		swap(temo.arr[wrongNodeIndex],temp.arr[temp.right( wrongNodeIndex)]])
		heapify(temp,temp.right( wrongNodeIndex));
	}
		
}