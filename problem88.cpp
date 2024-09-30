//WRITE C++ PROGRAM TO COUNT THE TOTAL NUMBER OF LEAF NODES.
#include<iostream>
using namespace std;
class node{
public:
     node *left;
     int data;
     node *right;
     node();
};
node::node()
{
	cout<<"Enter data else -1 : ";
	cin>>this->data;
	this->left = NULL;
	this->right=NULL;
}
node *buildTree(node* root)
{
  root = new node();
  if(root->data == -1)
	return NULL;
  cout<<"Enter the data for inserting in left of "<<root->data<<endl;
  root->left = buildTree(root);
  cout<<"Enter the data for inserting in right of "<<root->data<<endl;
  root->right = buildTree(root);
  return root;
}

void countLeftNodes(node *root,int &count)
{
	if(root == NULL) return;
	countLeftNodes(root->left,count);
	if(root->left == NULL && root->right == NULL)
		count++;
	countLeftNodes(root->right,count);
}

int main()
{
    node *root = NULL;
    //creating a tree;
    root = buildTree(root);  
	int count = 0;
	countLeftNodes(root,count);
	cout<<"Total Leaf Nodes are: "<<count<<endl;
    return 0;
}
