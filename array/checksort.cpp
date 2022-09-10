#include<iostream>
using namespace std;
bool isSorted(int arr[],int length)
{
	for(int i=0;i<length-1;i++){
		if(!(arr[i]<=arr[i+1]))
		{
			return false;
		}
	}
	return true;

}
int main()
{
	int A[]={-1,0,5,7};
	if(isSorted(A, 4))
		cout<<"Array is Sorted";
	else
		cout<<"Not Sorted ";		
}