#include<iostream>
using namespace std;
int* reverseArray(int arr[],int length)
{


	int *A = new int[length];
	for(int i=0;i<length;i++)
	{
		A[i]=arr[length-i-1];
	}
	return A;

}
//



void reverseArray1(int arr[],int length )
{	
	int temp;
	for(int i=0;i<length-i-1;i++)
	{
		temp=arr[i];
		arr[i]=arr[length-i-1];
		arr[length-i-1]=temp;
	}	

}
int main()
{
	int A[6]={10,5,4,3,2};
	reverseArray1(A,5);
	cout<<A[0];
}