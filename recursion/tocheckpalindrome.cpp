#include<iostream>
#include<string>
using namespace std;
bool isPalin(string str,int start,int end)
{	
	if(start>=end)
		return true;
	return (str[start]==str[end]) && isPalin(str,start+1,end-1);

}
int main()
{
	string s1="Hello";
	if(!isPalin(s1,0,s1.length()-1))
		cout<<"Not a Palin";
}