#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int n1=mid-low+1;
	int n2=high-mid;

	int left[n1];
	int right[n2];
	for(int i=0;i<n1;i++)
		left[i]=a[low+i];
	for(int i=0;i<n2;i++)
		right[i]=a[n1+i];
	int i=0;int j=0;int k=0;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			a[k]=left[i];
			i++;
			k++;
		}
		else
		{
			a[k]=right[j];
			k++;
			j++;
		}
	}
	while(i<n1)
	{
		a[k]=left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=right[j];
		j++;
		k++;
	}	
}
void mergesort(int arr[],int l,int r)
{
	if(r>l)
	{
		int m=l+(l-r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}	
}