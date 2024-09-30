//write program to check the balance tree for each nodes.
#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
class node{
	public:
	node *left;
	int data;
	node *right;
		node(int);
};
node::node(int data)
{
	this->left=NULL;
	this->data = data;
	this->right = NULL;
}
void createTree(node*& root)
{
	queue<node*>q;
	int data;
	cout<<"Enter root data: ";
	cin>>data;
	root = new node(data);
	q.push(root);
	while(!q.empty())
	{
		node* temp = q.front();
		q.pop();
		int leftData;
		cout<<"Enter left data else -1 of "<<temp->data<<" = ";
		cin>>leftData;
		if(leftData != -1)
		{
			temp->left = new node(leftData);
			q.push(temp->left);
		}
		int rightData;
		cout<<"Enter right data else -1 of "<<temp->data<<" = ";
		cin>>rightData;
		if(rightData != -1)
		{
			temp->right = new node(rightData);
			q.push(temp->right);
		}
	}
}
//pair<diameter,height>
bool isIdentical(node *root1,node* root2)
{
	if(root1 == NULL && root2 == NULL)
	{
		return true;
	}	
	else if(root1 == NULL && root2 != NULL)
	{
		return false;
	}
	else if(root1 != NULL && root2 == NULL)
	{
		return false;
	}
	
	bool left = isIdentical(root1->left,root2->left);
	bool right = isIdentical(root1->right,root2->right);	
	bool value = root1->data == root2->data;
	if(left && right && value)
	return true;
	else
	return false;
}
int main()
{
	node *root1 = NULL;
	createTree(root1);
	cout<<endl;
	cout<<"Second tree"<<endl;
	node *root2 = NULL;
	createTree(root2);
	cout<<"The given tree is balance: "<<isIdentical(root1,root2)<<endl;
	return 0;
}
