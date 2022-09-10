#include<iostream>
using namespace std;
int sumOfFistNatural(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if (n>1)
	{
		return n +sumOfFistNatural(n-1);
		
	}	
}
int main()
{
	cout<<sumOfFistNatural(10);
}