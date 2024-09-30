// doubly linked list with all possible operations
#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;
    node(int);
};
node::node(int data)
{
    this->prev = 0;
    this->data = data;
    this->next = 0;
}
// node created successfully
class linkedList
{
    node *head;
    node *tail;
    node *temp;
    node *newNode;
    int length;

public:
    void createList();
    void display();
    int getLength();
    void insertAtBegin();
    void insertAtEnd();
    void insertAtSpecific();
    // deletion
    void deleteFromBegin();
    void deleteFromSpecific();
    void deleteFromEnd();
};
void linkedList::createList()
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
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << "Press 1 to continue else 0: ";
        cin >> choice;
    }
}
void linkedList::display()
{
    if (head == 0)
    {
        cout << "\n\tList is empty" << endl;
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
int linkedList::getLength()
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
void linkedList::insertAtBegin()
{
    cout << "The data will be inserted at begin" << endl;
    int data;
    cout << "Enter data: ";
    cin >> data;
    newNode = new node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void linkedList::insertAtSpecific()
{
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    if (pos <= 0 && pos > getLength())
    {
        cout << "Invalid position" << endl;
        cout << "Position: " << pos << endl;
        cout << "Length: " << getLength() << endl;
        insertAtSpecific();
    }
    else if (pos == 1)
    {
        insertAtBegin();
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
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}
void linkedList::insertAtEnd()
{
    cout << "The data will be inserted at end" << endl;
    if (head == 0)
    {
        head = tail = newNode;
    }
    else
    {
        cout << "Enter data: ";
        int data;
        cin >> data;
        newNode = new node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void linkedList::deleteFromBegin()
{
    cout << "Data will be deleted from begin" << endl;
    if (head == 0)
    {
        cout << "\n\tThe list is empty" << endl;
    }
    else
    {
        temp = head;
        cout << temp->data << " is deleted" << endl;
        head = head->next;
        head->prev = 0;
        temp->next = 0;
        delete temp;
    }
}
void linkedList::deleteFromSpecific()
{
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    if (pos <= 0 && pos > getLength())
    {
        cout << "Invalid position" << endl;
        deleteFromSpecific();
    }
    else if (pos == 1)
    {
        deleteFromBegin();
    }
    else if (pos == getLength())
    {
        deleteFromEnd();
    }
    else
    {
        int i = 1;
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i = i + 1;
        }
        cout << temp->data << " is deleted" << endl;
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        temp->next = 0;
        temp->prev = 0;
        delete temp;
    }
}
void linkedList::deleteFromEnd()
{
    cout << "Data will be deleted from end" << endl;
    if (head == 0)
    {
        cout << "\n\tList is empty" << endl;
    }
    else
    {
        temp = tail;
        cout << temp->data << " is deleted" << endl;
        tail = tail->prev;
        tail->next = 0;
        temp->prev = 0;
        delete temp;
    }
}

// main function
int main()
{
    linkedList list;
    list.createList();
    list.display();
    list.insertAtBegin();
    list.display();
    list.insertAtSpecific();
    list.display();
    list.insertAtEnd();
    list.display();
    // deletion
    list.deleteFromBegin();
    list.display();
    list.deleteFromSpecific();
    list.display();
    list.deleteFromEnd();
    list.display();
    return 0;
}