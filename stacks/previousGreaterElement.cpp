#include <bits/stdc++.h>
using namespace std;
void printSpan(int arr[],int n){
    
    stack<int> s ;
    s.push(0);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        if(s.empty()==true)
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<arr[s.top()]<<" ";
        }    
        s.push(i);
    }
}
int main()
{
    int Arr[]={13,15,12,14,16,8,6,4,10,30};
    printSpan(Arr,10);
      
}