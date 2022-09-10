#include<iostream>
using namespace std;
void selectionSort(int arr[],int length)
{	
	for(int i=0;i<length-1;i++)
	{	
		int smallest_index=i;
		
		int temp;
		
		for(int j=i+1;j<length;j++)
		{	
			if(A[smallest_index]>arr[j] )
			{
				smallest_index =j;
			
			}	
		}
		temp= arr[smallest_index];
		arr[smallest_index]=arr[i];
		arr[i]=temp;
		

	}
	

		
}

int main()
{
	int A[]={0,1,8,6,4};
	selectionSort(A,5);
	for(int i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
	}
}