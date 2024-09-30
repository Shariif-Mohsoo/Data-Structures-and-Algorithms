// singly linked list with all possible operations
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int);
};
node::node(int data)
{
    this->data = data;
    this->next = 0;
}
// class node created successfully
class linkedlist
{
    node *head;
    node *temp;
    node *newNode;
    int length;

public:
    void createList();
    void display();
    void insertAtBegin();
    void insertATSpecific();
    void insertAtEnd();
    int getLength();
    // for deletion
    void deleteFromBegin();
    void deleteFromSpecific();
    void deleteFromEnd();
};
int linkedlist::getLength()
{
    length = 0;
    if (head == 0)
    {
        length = 0;
    }
    else
    {
        temp = head;
        while (temp != 0)
        {
            length++;
            temp = temp->next;
        }
        cout << endl;
    }
    return length;
}
void linkedlist::createList()
{
    head = 0;
    int choice = 1;
    int data;
    while (choice)
    {
        cout << "Enter data: ";
        cin >> data;
        newNode = new node(data);
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout << "Enter 1 to continue else 0: ";
        cin >> choice;
    }
}
void linkedlist::display()
{
    if (head == 0)
    {
        cout << "\nt\tEmpty list" << endl;
    }
    else
    {
        temp = head;
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
void linkedlist ::insertAtBegin()
{
    cout << "\tData will be inserted at begin" << endl;
    cout << "Enter the data: ";
    int data;
    cin >> data;
    newNode = new node(data);
    newNode->next = head;
    head = newNode;
}
void linkedlist::insertAtEnd()
{
    cout << "\tData will be inserted at end" << endl;

    if (head == 0)
    {
        cout << "\n\tEmpty list" << endl;
    }
    else
    {
        int data;
        cout << "Enter the data: ";
        cin >> data;
        newNode = new node(data);
        temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void linkedlist::insertATSpecific()
{
    cout << "Enter the position: ";
    int pos;
    cin >> pos;
    if (pos <= 0 || pos > getLength())
    {
        cout << "\nInvalid position" << endl;
        cout << "Length: " << length << endl;
        cout << "Position: " << pos << endl;
        this->insertATSpecific();
    }
    else if (pos == 1)
    {
        this->insertAtBegin();
    }
    else
    {
        int data;
        cout << "Enter data: ";
        cin >> data;
        newNode = new node(data);
        int i = 1;
        temp = head;
        while (i < (pos - 1))
        {
            temp = temp->next;
            i = i + 1;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
// let's see the deletion
void linkedlist::deleteFromBegin()
{
    cout << "\nData will be deleted from begin" << endl;
    if (head == 0)
    {
        cout << "\nt\tThe list is empty" << endl;
    }
    else
    {
        temp = head;
        cout << temp->data << " is deleted" << endl;
        head = head->next;
        temp->next = 0;
        delete temp;
    }
}
void linkedlist::deleteFromEnd()
{
    cout << "Data will be deleted from end" << endl;
    if (head == 0)
    {
        cout << "\n\tThe list is empty" << endl;
    }
    else
    {
        temp = head;
        while (temp->next->next != 0)
        {
            /* code */
            temp = temp->next;
        }
        cout << temp->next->data << " is deleted" << endl;
        delete (temp->next);
        temp->next = 0;
    }
}
void linkedlist::deleteFromSpecific()
{
    int pos;
    cout << "Enter the position: ";
    cin >> pos;
    if (pos > getLength() || pos <= 0)
    {
        cout << "\n\tInvalid position" << endl;
        deleteFromSpecific();
    }
    else if (pos == 1)
    {
        deleteFromBegin();
    }
    else
    {
        int i = 1;
        temp = head;
        while (i < (pos - 1))
        {
            temp = temp->next;
            i = i + 1;
        }
        node *nxtNode = temp->next;
        cout << nxtNode->data << " is deleted" << endl;
        temp->next = nxtNode->next;
        nxtNode->next = 0;
        delete nxtNode;
    }
}
int main()
{
    linkedlist list;
    list.createList();
    list.display();
    list.insertAtBegin();
    list.display();
    list.insertATSpecific();
    list.display();
    list.insertAtEnd();
    list.display();

    list.deleteFromBegin();
    list.display();
    list.deleteFromSpecific();
    list.display();
    list.deleteFromEnd();
    list.display();
    return 0;
}