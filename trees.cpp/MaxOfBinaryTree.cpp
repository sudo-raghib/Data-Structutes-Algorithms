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
int inorderTraversal(Node * root)
{	
	if(root ==NULL){return INT_MIN;}
	int d= max(inorderTraversal(root->left),inorderTraversal(root->right));
	if(root->key<d)
		return d;
	else{return root->key;}

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