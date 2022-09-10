#include<iostream>
using namespace std;
void moveZeroesToEnd(int arr[],int length)
{	
	static int j=0;
	int res[length];
	for(int i=0;i<length;i++)
	{
		if(arr[i]!=0)
		{	
			res[j]=arr[i];
			j++;
		}	
	}
	for(int i=0;i<=length-j;j++)
	{
		res[j]=0;
	}

	for(int i=0;i<length;i++)
	{
		cout<<res[i]<<endl;
	}	
}


//Efficient way

void moveZeroesToEnd1(int arr[],int length)
{
	int count =0;
	for(int i=0;i<length;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}	
	}	
}
int main()
{	
	int A[]={0,0,5,6,3,0};
	moveZeroesToEnd(A,6);
}