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
void inorderTraversal(Node * root)
{
	if( root==NULL){return;}
	cout<<root->key<<" ";
	inorderTraversal(root->left);
	inorderTraversal(root->right);

}
int main()
{
	Node * root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node (40);
	root->left->right=new Node(70);
	inorderTraversal(root);
}