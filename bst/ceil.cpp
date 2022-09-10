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
Node * ceil(Node * root,int key)
{
  Node * res=NULL;
  while(root!=NULL)
  {
    if(root->key<key)
    {
      root->right;
    }
    else if(root->key>key)
    {
      root->left;
      res=root;
    }
    else
    {
      res=root;
      break;
    }  
  }
  return res;  
}