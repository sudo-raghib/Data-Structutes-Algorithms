#include<iostream>
using namespace std;
int A[]={2,4,6,8,10,12};
int binaryRecursion(int arr[],int element,int low,int high )
{	
	if(arr[low+high/2]==element)
	
		return (low+high/2);
	
	else if(low>high)
		return -1;

	if(arr[(low+high)/2]<element)
	{
		binaryRecursion(A,element,((low+high)/2)+1,high);
	}
	else
	{
		binaryRecursion(A,element,low,((low+high)/2)-1);
	}
}
int main()
{
	cout<<binaryRecursion(A,9,0,5);
}