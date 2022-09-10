#include<iostream>
#include<queue>
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
int Diameter(Node * head)
{	
	if(head==NULL){return 0;}
	int lh=Diameter(head->left);
	int rh=Diameter(head->right);
	return max(1+lh+rh);
}