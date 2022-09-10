#include<iostream>
using namespace std;
int secondLargest(int arr[],int length)
{	
	int count=999;
	int Greatest=arr[0];
	int SecondLargest; 
	for(int i=0;i<=length;i++)
	{
		if(Greatest<arr[i] )
		{
			Greatest=arr[i];
			
		}

	}
	cout<<Greatest<<endl;
	for(int i=0;i<=length;i++)
	{	
		if(Greatest!=arr[i])
		{
			
			if(Greatest-arr[i]<count)
			{
				count=Greatest-arr[i];
		    	SecondLargest=arr[i];
		   } 
		} 
	}
	return SecondLargest;	


//Efficient approach

int secondLargest1(int arr[],int length)
{
	int res=-1,int largest=0;
	for(int i=0;i<=length;i++)
	{
		if(arr[i]>arr[largest])
		{
			res=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest])
		{
			if(res==-1  || arr[i]>arr[res])
				res=i;
		}	
	}
	return res;	
}

}
int main()
{
	int A[]={-5,-15,-7,-9,-13};
	cout<<secondLargest(A,4);

}