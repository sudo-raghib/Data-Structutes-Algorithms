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
 ChildrenSumProperty(Node * root)
{	
	if(root ==NULL){return true;}
	if(root->key%(ChildrenSumProperty(root->left)+ChildrenSumProperty(root->right))==0);
		return root->key;
}
int main()
{
	Node * root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node (40);
	root->left->right=new Node(70);
	root->left->right->left=new Node(-100);
	cout<<inorderTraversal(root);
}