//creating the singly linked list and also performed all the operations.
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
	void insertAtBegin();
	void insertAtEnd();
	void insertAtSpecfic();
	//getting the length of entire list
	int getLength();
	//deletion in linked list
	void deleteBegin();
	void deleteEnd();
	void deleteSpecific();
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
void linkedList::insertAtBegin()
{
	cout<<"Data will be insertedAtBegin"<<endl;
	newNode = new node();
	newNode->next =head;
	head = newNode;
}

void linkedList::insertAtEnd()
{
	cout<<"Data will be insertedAtEnd"<<endl;
	newNode = new node();
	if(head == 0)
		head = temp = newNode;
	else {
		temp = head;
		while(temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

int linkedList::getLength()
{
	int count = 0;
	if(head == 0)
		cout<<"Dear empty linked list"<<endl;
	else {
		temp = head;
		while(temp != 0)
		{
			temp = temp->next;
			count++;
		}
	}
	return count;
}

void linkedList::insertAtSpecfic()
{
	cout<<"Enter the position to insert data: ";
	int pos;
	cin>>pos;
	if(pos<=0 || pos>getLength())
	{
		cout<<"Invalid Input"<<endl;
		this->insertAtSpecfic();
	}
	else if(pos == 1)
	{
		this->insertAtBegin();
	}
	else
	{
		newNode = new node();
		temp = head;
		for(int i=1; i < (pos - 1); i++)
			temp = temp->next;
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

void linkedList::deleteBegin()
{
	if(head == 0)
		cout<<"empty linkedList"<<endl;
	else
	{
		temp = head;
		cout<<temp->data<<" is deleted"<<endl;
		head = head->next;
		temp->next = 0;
		delete temp;
	}
}

void linkedList::deleteEnd()
{
	if(head == 0)
		cout<<"empty linkedList"<<endl;
	else
	{
		temp = head;
		while(temp->next->next != 0)
			temp = temp->next;
		cout<<temp->next->data<<" is deleted"<<endl;
		delete (temp->next);
		temp->next = 0;
	}
}

void linkedList::deleteSpecific()
{
	cout<<"Enter the position to delete data : ";
	int pos;
	cin>>pos;
	if(pos <= 0 || pos>this->getLength())
	{
		cout<<"Invalid position"<<endl;
		this->deleteSpecific();
	}
	else if(pos == 1)
	{
		this->deleteBegin();
	}
	else if(pos == this->getLength())
	{
		this->deleteEnd();
	}
	else
	{
		temp = head;
		for(int i = 1; i<(pos - 1); i++)
			temp = temp->next;
		node *nxtNode = temp->next;
		temp->next = nxtNode->next;
		cout<<nxtNode->data<<" is deleted"<<endl;
		delete nxtNode;
	}
}

void linkedList::performOperations()
{
	this->createLinkedList();
	this->display();
	//insertion operations in linked list
	// this->insertAtBegin();
	// this->display();
	// this->insertAtEnd();
	// this->display();
	// this->insertAtSpecfic();
	// this->display();
	// this->deleteBegin();
	// this->display();
	// this->deleteEnd();
	// this->display();
	// this->deleteSpecific();
	// this->display();
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