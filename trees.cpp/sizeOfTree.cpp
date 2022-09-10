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
int inorderTraversal(Node * root)
{	
	int d=0;
	if( root==NULL){return d;}
	d++;
	d=d+inorderTraversal(root->left);
	d=d+inorderTraversal(root->right);
	return d;
	

}
int main()
{
	Node * root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node (40);
	root->left->right=new Node(70);
	root->left->right->left=new Node(100);
	cout<<inorderTraversal(root);
}