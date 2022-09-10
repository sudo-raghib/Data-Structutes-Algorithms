#include<iostream>
using namespace std;
void deleteFromArray(int arr[],int n,int x)
{
	int i;

	for( i=0;i<=n;i++)
	{	
		if(arr[i]==x)
			break;
		
	}
	cout<<i;
	
		
	for(int j=i;j<n;j++)
	{
		arr[j]=arr[j+1];
		
	}

	for(int y=0;y<=n;y++)
		cout<<arr[y]<<endl;
		
}
int main()
{
	int A[5]={10,5,6,7,-1};
	deleteFromArray(A,4,7);

	for(int y=0;y<=4;y++)
		cout<<A[y]<<endl;


	
}