#include<iostream>
using namespace std;
void partition(int arr[],int l,int h,int p)
{	
	int temp[h-l+1],index=0;
	for(int i=l;i<=h;i++)
	{
		if(arr[i]<=arr[p])
		{
			temp[index]=arr[i];
			index++;
		}	
	}
	for(int i=l;i<=h;i++)
	{
		if(arr[i]>=arr[p])
		{
			temp[index]=arr[i];
			index++;
		}	
	}
	for(int i=l;i<=h;i++)
	{
		arr[i]=temp[i-l];
	}	


}
int main()
{
	int A[]={10,5,3,4,7,9};
	 partition(A,6,2);
	 for(int x:A)
	 	cout<<x<<endl;
}