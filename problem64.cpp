//program to find the mid of the linkedList and also reverse the List;
#include<iostream>
using namespace std;
//creating the node class
//forward declaration
class linkedList;
class node
{
	int data;
	node *next;
	friend class linkedList;
	node();
	~node();
};
node::node()
{
	next = 0;
	cout<<"Enter the data: ";
	cin>>data;
}
node::~node()
{
	delete next;
}
//main class
class linkedList
{
	node *head;
	node *temp;
	node *newNode;
public:
	linkedList();
	void createLinkedList();
	void display();
	//insertion operator
	void performOperations();
	void reverseList(node*&,node*,node*);
	void getMiddle();
	//destructer
	~linkedList();
};
linkedList::linkedList()
{
	head = 0;
	temp = 0;
	newNode = 0;
}
void linkedList::createLinkedList()
{
	int choice = 1;
	while(choice)
	{
		newNode = new node();
		if(head == 0)
		{
			temp = head = newNode;
		}
		else
		{
			temp->next = newNode;
			temp = newNode;
		}
		cout<<"To continue press 1 else 0: ";
		cin>>choice;
	}
}
void linkedList::display()
{
	cout<<"Linked list: ";
	temp = head;
	while(temp!=0)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void linkedList::reverseList(node* &head,node* prev,node *curr)
{
    if(curr == 0)
    {
        head = prev;
        return;
    }
    node *next = curr->next;
    this->reverseList(head,curr,next);
    curr->next = prev;
}

void linkedList::getMiddle()
{
    if(head == 0)
    {
        cout<<"Empty linkedList"<<endl;
        return;    
    }
    else if(head->next == 0)
    {
        cout<<"Middle: "<<head->data<<endl;
        return;
    }
    else if(head->next->next == 0)
    {
        cout<<"Middle: "<<head->next->data<<endl;
        return;
    }
    else
    {
        node* fast;
        node* slow;
        slow  = head;
        fast = head->next;
        while(fast != 0)
        {
            fast=fast->next;
            if(fast != 0)
                fast = fast->next;
            slow = slow->next;
        }
        cout<<"Middle: "<<slow->data<<endl;
        return;
    }
}

void linkedList::performOperations()
{
	this->createLinkedList();
	this->display();
	this->getMiddle();
	node *prev = 0;
	node *curr = head;
	this->reverseList(head,prev,curr);
	this->display();
}


linkedList::~linkedList()
{
	delete head;
	delete temp;
	delete newNode;
}

int main()
{
	linkedList list;
	list.performOperations();
	return 0;
}