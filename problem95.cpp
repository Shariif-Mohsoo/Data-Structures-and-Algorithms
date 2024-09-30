//write program to check the sum tree(root's data == root's left data + roo'ts right data) for each nodes except leaf nodes.
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
pair<bool,int> sumTree(node *root)
{
	if(root == NULL)
	{
		pair<bool,int> p = make_pair(true,0);
		return p;
	}
	if(root->left == NULL && root->right == NULL)
	{
		pair<bool,int> p = make_pair(true,root->data);
		return p;
	}
	pair<bool,int>leftAns = sumTree(root->left);
	pair<bool,int>rightAns = sumTree(root->right);
	bool left = leftAns.first;
	bool right = rightAns.first;
	bool condu = root->data == (leftAns.second + rightAns.second);
	
	pair<bool,int>ans;
	if(left && right && condu)
	{
		ans.first = true;
		ans.second = root->data + leftAns.second + rightAns.second;
	}
	else
	{
		ans.first = false;
	}
	return ans;
	
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
