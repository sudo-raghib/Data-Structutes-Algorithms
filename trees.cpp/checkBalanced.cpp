#include<iostream>
#include<climits>
#include<algorithm>
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
int HeightTraversal(Node * root)
{	
	if( root==NULL)
	{
		return 0;
	}
	


}
bool checkBalance(int root)
{	
	if(root ==NULL){return true;}
	if(root->left==NULL&& root->right==NULL)
		return true;
	if(root->left!=NULL){diff=}
	int diff;
	


}