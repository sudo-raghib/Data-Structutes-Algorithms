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
bool search(Node * head,int key)
{
	if(head==NULL){return false;}
	if(head->key==key){return true;}
	else if(head->key<key)
		search(head->right,key);
	else
		search(head->left,key);

}
// iterative
bool search(Node *root, int x){
    while(root!=NULL){
        if(root->key==x)
            return true;
        else if(root->key<x)
            root=root->right;
        else
            root=root->left;
    }
    return false;
}