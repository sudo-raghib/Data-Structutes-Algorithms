#include<iostream>
using namespace std;
void towerOfHanoi(int discs,char A,char B,char C)

{
	if(discs==1){
		cout<<"Move 1 FROM"<<A<<"to"<<C<<endl;
		return;
	}	
	towerOfHanoi(discs-1,A,B,C);
	cout<<"Move "<<discs<<"FROM"<<A<<"to"<<C<<endl;
	towerOfHanoi(discs-1,B,A,C);
	
}
int main()
{
	towerOfHanoi(3,'A','B','C');
}
