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
pair<bool,int> isBalance(node *root)
{
	if(root == NULL)
	{
		pair<bool,int>p = make_pair(true,0);
		return p;
	}
	pair<bool,int>left = isBalance(root->left);
	pair<bool,int>right = isBalance(root->right);
	int leftAns = left.first;
	int rightAns = right.first;
	bool diff = abs(left.second - right.second) <= 1;
	pair<bool,int>ans;
	ans.second = max(left.second,right.second) + 1;
	if(leftAns && rightAns && diff)
		ans.first = true;
	else 
		ans.first = false;
	return ans;	
}
int main()
{
	node *root = NULL;
	createTree(root);
	cout<<"The given tree is balance: "<<isBalance(root).first<<endl;
	return 0;
}
