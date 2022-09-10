#include<iostream>
#include<math.h>
using namespace std;
int squareroot(int x)
{
	int low,high,mid,ans;
	low=0;
	high=x;
	
	while(low<=high)
	{	
		mid=(low+high)/2;
		int msq=mid*mid;
		if(msq==x)
		{	
			return mid;
	        
	       
	    }
	    else if (msq>x)
	    {
	    	high=mid-1;
		
	    } 
	    else
	    {
	    	low=mid+1;
	    	ans=mid;
	    }  		

	}
	return ans;

}

int main()
{
	cout<<squareroot(36);
}