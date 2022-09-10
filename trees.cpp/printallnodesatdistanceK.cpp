#include<iostream>
using namespace std;
struct  Node
{
	Node *left;
	Node *right;
	int key;
	Node(int x)
	{
		key=x;
		left=right=NULL;
	}
};

void HeightTraversal(Node * root,int k)
{	
	if( root==NULL){return;}
	
	if(k==0)
	{
		cout<<root->key<<" ";
    }
    else
    {
    	HeightTraversal(root->left,k-1);
		HeightTraversal(root->right,k-1);
    }	
}
int main()
{
	Node * root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node (40);
	root->left->right=new Node(70);
	HeightTraversal(root,2);
}