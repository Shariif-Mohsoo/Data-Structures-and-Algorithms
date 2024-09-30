// here we will see the implementation of binary search tree
#include <iostream>
using namespace std;
// class node
class node
{
public:
    node *left;
    int data;
    node *right;
    node(int);
};
node ::node(int data)
{
    this->data = data;
    this->left = 0;
    this->right = 0;
}
// class tree
class Tree
{
public:
    void getData(node *&);
    node *createTree(node *, int);
    void inOrder(node *);
    bool search(node *, int);
    int getSmall(node *);
    int getLarge(node *);
    node *deleteNode(node *, int);
    void getTree();
};
node *Tree::deleteNode(node *root, int data)
{
    if (root == 0)
        return root;
    else if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == 0 && root->right == 0)
        {
            delete root;
            root = 0;
        }
        else if (root->left != 0 && root->right == 0)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        else if (root->left == 0 && root->right != 0)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }
        else
        {
            int data = getSmall(root->right);
            root->data = data;
            root->right = deleteNode(root->right, data);
        }
    }
    return root;
}
bool Tree::search(node *root, int data)
{
    if (root == 0)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}
int Tree::getSmall(node *root)
{
    while (root->left != 0)
    {
        root = root->left;
    }
    return root->data;
}
int Tree::getLarge(node *root)
{
    while (root->right != 0)
    {
        root = root->right;
    }
    return root->data;
}
void Tree::getTree()
{
    node *tr = 0;
    getData(tr);
    inOrder(tr);
    cout << endl;
    // cout << getLarge(tr);
    // cout << "\nEnter item to search: ";
    // int item;
    // cin >> item;
    // if (search(tr, item))
    //     cout << "Item exist" << endl;
    // else
    //     cout << "Item doesn't exist" << endl;

    // let's hook with deletion
    int deItem;
    cout << "Enter item to delete: ";
    cin >> deItem;
    tr = deleteNode(tr, deItem);
    inOrder(tr);
}
node *Tree::createTree(node *root, int data)
{
    if (root == 0)
        root = new node(data);
    else if (data <= root->data)
        root->left = createTree(root->left, data);
    else
        root->right = createTree(root->right, data);
    return root;
}
void Tree::getData(node *&root)
{
    int data;
    while (true)
    {
        cout << "Enter data else -1: ";
        cin >> data;
        if (data == -1)
            break;
        root = createTree(root, data);
    }
}
void Tree::inOrder(node *root)
{
    if (root == 0)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
    Tree t;
    t.getTree();
    return 0;
}