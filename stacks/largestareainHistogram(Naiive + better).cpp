#include <bits/stdc++.h>
using namespace std;
//Better
int getMaxAreaBetter(int arr[],int n){
    int res=0;
    int ps[n],ns[n];
    
    stack <int> s;
    s.push(0);
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]>=arr[i])
            s.pop();
        int pse=s.empty()?-1:s.top();
        ps[i]=pse;
        s.push(i);
    }
    
    while(s.empty()==false){
        s.pop();
    }
    
    s.push(n-1);
    for(int i=n-1;i>0;i--){
        while(s.empty()==false && arr[s.top()]>=arr[i])
            s.pop();
        int nse=s.empty()?n:s.top();
        ns[i]=nse;
        s.push(i);
    }
    
    for(int i=0;i<n;i++){
        int curr=arr[i];
        curr+=(i-ps[i]-1)*arr[i];
        curr+=(ns[i]-i-1)*arr[i];
        res=max(res,curr);
    }
    return res;
    
}
int getMaxAreaNaiive(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>=arr[i])curr+=arr[i];
            else break;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i])curr+=arr[i];
            else break;
        }
        res=max(res,curr);
    }
    return res;
    
}