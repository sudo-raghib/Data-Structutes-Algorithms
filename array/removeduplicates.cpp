#include<iostream>
#include<string>
using namespace std;
void removeDuplicates(int Arr[],int length)
{	
	int resultant[length];
	static int j=0;
	for(int i=1;i<length;i++)
	{	
		if(Arr[i-1]!=Arr[i])
		{	
			resultant[j]= Arr[i-1];
			j++;
		}
		else if(i==length-1)
		{
			resultant[j]=Arr[i];
		}	
    }
    for(int i=0;i<=j;i++)
    {
    	cout<<resultant[i]<<endl;
    }	

}
int main()
{
	int A[]={-1,-1,0,7,8,8,15,19,19};
	removeDuplicates(A,9);
}