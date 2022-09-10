#include<iostream>
using namespace std;
int  partitionlomuto(int arr[],int l,int h)
{
	int pivot=arr[h]//Always last
	int i=l-1;
	for(int j=l;j<=h-1;j++)
	{
		if(arr[i]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}

	}
	swap(arr[i+1],arr[h]);
	return i+1;	
}

void partitionhoare(int arr[],int l,int h)
{
	int pivot=arr[l];
	int i=l-1;
	j=h+1;
	while(true)
	{
		do{
			i++;
		}while(arr[i]<pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i>=j)
			return j;
		swap(arr[i],arr[j]);
	}
		
}


void qsortlomuto(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=partitionlomuto(arr,l,h);
		qsortlomuto(arr,l,p-1);
		qsortlomuto(arr,p+1,h);
	}	
}

void qsorthoare(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=partitionhoare(arr,l,h);
		qsorthoare(arr,l,p);
		qsorthoare(arr,p+1,h);
	}
}

