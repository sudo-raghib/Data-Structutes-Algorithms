#include<iostream>
using namespace std;
int BinarySearch(int arr[],int length,int element)
{
	int mid,low,high;
	low=0;
	high=length-1;
	mid=(low+high)/2;
	while(arr[mid]!=element)
	{
		if(arr[mid]<element)
			low=mid+1;
		else if(arr[mid]>element)
			high=mid-1;

		if(high<low)
			return -1;
		mid=(low+high)/2;
	}
	return mid;
	
}
int main()
{
	int A[]={2,4,6,8,10,12};
	cout<<BinarySearch(A,6,15);
}