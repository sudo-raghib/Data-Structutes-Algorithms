#include<iostream>
using namespace std;

#timecomplexity m+n;
void merge(int arr[],int arr2[],int length1,int length2)
{	
	int i=0;
	int j=0;
	while(i<length1 &&j<length2)
	{
		if(arr[i]<=arr2[j])
		{
			cout<<arr[i]<<endl;;

			i++;
		}
		else
		{
			cout<<arr2[j]<<endl;
			j++;
		}	
	}
	if(j<=length2-1)
	{
		for(j;j<length2;j++)
			cout<<arr2[j]<<endl;
	}
	else if( i<=length1-1)	
	{
		for(i;i<length1;i++)
			cout<<arr[i]<<endl;
	}



}
int main()
{
	int A[]={1,1,1,3,5,7,9};
	int B[]={2,4,4,4,7,11,15,18};
	merge(A,B,7,8);
}