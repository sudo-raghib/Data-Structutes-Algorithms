#include<iostream>
using namespace std;
int nCr(int n,int r)
{
	if(n==r || r==0)
		return 1;
	return nCr(n-1,r)+nCr(n-1,r-1);		
}
int main()
{
	cout<<nCr(10,5);
}