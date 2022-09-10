#include<iostream>
using namespace std;
int firstOccurence1(int arr[],int length,int element)
{
	int low,high,mid;
	low=0;
	high=length-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]==element)
		{	
			if(mid !=length-1 && arr[mid +1]==element)
			{	
				low=mid+1;
				
			}	
	        
	        else  
	        	return mid;
	    }
	    else
	    {
	    	if(arr[mid]<element)
				low=mid+1;
			else if(arr[mid]>element)
				high=mid-1;

		
	    } 
	    mid=(low+high)/2;   		

	}
	return -1;

}
int  main()
{
	int A[]={2,2,5,5,5,5,10,10,10,15};
	cout<<firstOccurence1(A,10,15);
}