#include<iostream>
using namespace std;
void merge2(int array[],int low,int mid,int high)
{
	for(int i=mid+1;i<=high;i++)
	{
		
		int temp;
		for(int j=i;j>=low+1;j--)
		{	

			if(array[j]<array[j-1])
			{	
				temp=array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
			
			}
			else
				break;	

		}

	}
	


}

efficient

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
int main()
{
	int A[]={1,1,3,4,7,-1,1,5,8};
	merge2(A,0,4,8);
	for(int x:A)
		cout<<x<<endl;

}