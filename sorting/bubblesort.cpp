#include<iostream>
using namespace std;
void bubbleSort(int arr[],int length)
{
	for(int i=1;i<=length-1;i++)
	{	
		int check=0;
		for(int j=0;j<length-i-1;j++)
		{	

			int temp;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if(check==0)
			break;
	}	
}
int main()
{
	int A[]={10,5,0,6,7,8,8,9,10};
	bubbleSort(A,9);
	for(int x:A)
		cout<<x<<endl;
}