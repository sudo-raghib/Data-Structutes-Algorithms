#include<iostream>
using namespace std;
int occurenceOf1(int arr[],int length,int element)
{
	int low,high,mid;
	low=0;
	high=length-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]==element)
		{	
			if(mid !=0 && arr[mid -1]==element)
			{	
				high=mid-1;
				
			}	
	        
	        else  
	        	return (length-mid);
	    }
	    else
	    {
	    	if(arr[mid]<element)
				low=mid+1;
			

		
	    } 
	    mid=(low+high)/2;   		

	}
	return -1;
}		

int  main()
{
	int A[]={0,0,0,0};
	cout<<occurenceOf1(A,4,1);
}