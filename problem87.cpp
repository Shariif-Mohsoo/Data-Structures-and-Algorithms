//WRITE PROGRAM TO CREATE THE TREE IN LEVEL ORDER also display the output.
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
		friend void display(node*);
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
void display(node *root)
{
	//displaying the tree in level order.
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	cout<<"Level Order Traversal \n";
	while(!q.empty())
	{
		node* temp = q.front();
		q.pop();
		if(temp == NULL)
		{
			cout<<endl;
			if(!q.empty())
			q.push(NULL);
		}
		else
		{
			cout<<temp->data<<"  ";
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
	createTree(root);
	display(root);
	return 0;
}
