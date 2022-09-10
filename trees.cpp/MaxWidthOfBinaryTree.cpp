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
int printLevel(Node *root){
    if(root==NULL){return 0;}
    queue<Node *>q;
    q.push(root);
    int width=-5;
    while(q.empty()==false)
    {	
 
    	int count=q.size();
    	
    	if(count>width)
    	{	
    		width=count;
    	}

    	for(int i=0;i<count;i++)
        {	
        	Node *curr=q.front();
        	q.pop();
        	if(curr->left!=NULL)
            	q.push(curr->left);
       		if(curr->right!=NULL)
            	q.push(curr->right);
        	
        }
        	
    }
    return width; 
}
int main()
{
	Node * root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node (40);
	root->left->right=new Node(70);
	root->left->right->left=new Node(70);
	
	root->left->left->right=new Node (40);
	root->left->left->left=new Node(-1);
	cout<<printLevel(root);
}