//WRITE C++ PROGRAM TO FIND THE DIAMETER(WIDTH{longest path between two nodes}) of tree.
#include<iostream>
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
pair<int,int> diameter(node *root)
{
	if(root == NULL)
	{
		pair<int,int> p = make_pair(0,0);
		return p;
	}
	pair<int,int> left = diameter(root->left);
	pair<int,int> right = diameter(root->right);
	
	//right diameter
	int op1 = left.first;
	//left diameter
	int op2 = right.first;
	//height
	int op3 = left.second + right.second + 1;
	
	pair<int,int>ans;
	ans.first = max(op3,max(op1,op2));
	ans.second = max(left.second,right.second) + 1;
	return ans;
}
int main()
{
	node *root = NULL;
	createTree(root);
	cout<<"The diameter of the tree is: "<<diameter(root).first<<endl;
	return 0;
}
