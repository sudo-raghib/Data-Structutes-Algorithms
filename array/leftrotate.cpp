#include<iostream>
using namespace std;
void leftRotate(int arr[],int length)
{
	int temp;
	for(int i=0;i<length-1;i++)
	{
		temp=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=temp;
	}	
}
int main()
{
	int A[]={2,4,5,8,8};
	leftRotate(A,5);
	for(int i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
	}	
}