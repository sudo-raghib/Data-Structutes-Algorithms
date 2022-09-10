#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int floor(Node * root,int value)
{   
    int  Floor=0;
    if(root==NULL){return 0;}
    if(root->key<=value)
      Floor=root->key;
    Floor=max(Floor,floor(root->right,value));
    return max(Floor,floor(root->left,value));



}
int main() {
    
    Node *root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    root->right->left=new Node(12);
    root->right->right=new Node(18);
    int x=18;
    
    cout<<floor(root,x);
}