#include<stdio.h>
int sum(int arr[],int rows,int columns)
{	int sum=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			sum+=arr[i][j];
		}	
	}
	return sum;	
}
int main()
{	
	int A[2][3]={{10,5,6},{8,9,0}};
	printf("The SUM IS %d",sum(A,2,3));
}