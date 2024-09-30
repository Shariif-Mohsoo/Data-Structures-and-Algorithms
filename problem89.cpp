//WRITE C++ PROGRAM TO FIND THE HEIGHT(longest path b/w root & leaf node) OF BINARY TREE.
#include<iostream>
#include<queue>
using namespace std;
class node{
	node* left;
	int data;
	node* right;
	public:
		node(int);
		friend void createTree(node*&);
		friend int height(node*);
};
node::node(int data)
{
	left = NULL;
	this->data = data;
	right = NULL;
}

void createTree(node*& root)
{
	queue<node*>q;
	int data;
	cout<<"Enter the data from root: ";
	cin>>data;
	root = new node(data);
	q.push(root);
	while(!q.empty())
	{
		node* temp = q.front();
		q.pop();
		cout<<"Enter the left data for "<<temp->data<<" else -1: ";
		int leftData;
		cin>>leftData;
		if(leftData != -1)
		{
			temp->left = new node(leftData);
			q.push(temp->left);
		}
		
		cout<<"Enter the right data for "<<temp->data<<" else -1: ";
		int rightData;
		cin>>rightData;
		if(rightData != -1)
		{
			temp->right = new node(rightData);
			q.push(temp->right);
		}
	}
}
int height(node* root)
{
	if(root == NULL) return 0;
	int left = height(root->left);
	int right = height(root->right);
	int ans = max(left,right) + 1;
	return ans;
}
int main()
{
	node* root = NULL;
	createTree(root);
	cout<<"The height of tree is "<<height(root)<<endl;
	
	return 0;
}
