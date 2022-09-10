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
Node* prev=NULL;
Node * rootNode=NULL;
void InorderTraversal(Node * root)
{
	if(root==NULL){return;}
	InorderTraversal(root->left);
	if(rootNode==NULL){rootNode=root;}
	if(prev!=NULL)
		{prev->right=root}
	root->left=prev;
	prev=root;
	InorderTraversal(root->right);
	prev->right=NULL;
}