// Write program to implement the tree and display it using level order traversal
#include<iostream>
#include<queue>
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

void levelOrderTraversal(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    cout<<"Level Order Traversal "<<endl;
    while(!q.empty())
    {
        node*temp = q.front();
        q.pop();
        if(temp == NULL)
        {
           cout<<endl;
           if(!q.empty())
            q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
            
    }
}
int main()
{
    node *root = NULL;
    //creating a tree;
    root = buildTree(root);  
    levelOrderTraversal(root);
    return 0;
}
