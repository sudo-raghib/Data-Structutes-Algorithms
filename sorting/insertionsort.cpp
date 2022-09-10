#include<iostream>
using namespace std;
void insertionSort(int arr[],int length)
{
	for(int i=0;i<length-1;i++)
	{
		for(int j=i+1;j>0;j--)
		{	
			int temp;
			if(arr[j]<arr[j-1])
			{	
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;

			}	
		}	
	}	
}


void insertionSort1(int arr[],int length)
{
	int key =arr[i];
	int j=i-1;
	while(j>0&& arr[j]>key)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=key;	
}
int main()
{
	int A[]={2,10,5,5,57,9,-5};
	insertionSort(A,7);
	for(int x:A)
		cout<<x<<endl;
}