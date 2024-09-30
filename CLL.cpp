// singly circular linked list with all possible operations
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
// linked list is created
class linkedList
{
    node *head;
    node *temp;
    node *tail;
    node *newNode;
    int length;

public:
    void createList();
    void display();
    int getLength();
    // insertion
    void insertAtBegin();
    void insertSpecific();
    void insertAtEnd();
    // deletion
    void deleteBegin();
    void deleteSpecific();
    void deleteEnd();
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
            tail = newNode;
        }
        tail->next = head;
        cout << "Press 1 to continue else 0: ";
        cin >> choice;
    }
}
void linkedList::insertAtBegin()
{
    cout << "Data will be inserted at begin";
    int data;
    cout << "\nEnter data: ";
    cin >> data;
    newNode = new node(data);
    if (head == 0)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    tail->next = newNode;
}
void linkedList::insertSpecific()
{
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    if (pos <= 0 || pos > getLength())
    {
        cout << "Invalid position" << endl;
        cout << "Position: " << pos << endl;
        cout << "Length: " << getLength() << endl;
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
        temp->next = newNode;
    }
}
void linkedList::insertAtEnd()
{
    cout << "Data will be inserted in end" << endl;
    int data;
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
        tail = newNode;
    }
    tail->next = head;
}
void linkedList::deleteBegin()
{
    cout << "Data will be deleted from begin" << endl;
    if (head == 0)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        temp = head;
        cout << temp->data << " is deleted" << endl;
        head = head->next;
        temp->next = 0;
        delete temp;
        tail->next = head;
    }
}
void linkedList::deleteSpecific()
{
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    if (pos <= 0 && pos > getLength())
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 1)
    {
        deleteBegin();
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
        node *nextNode = temp->next;
        cout << nextNode->data << " is deleted" << endl;
        temp->next = nextNode->next;
        nextNode->next = 0;
        delete nextNode;
    }
}
void linkedList::deleteEnd()
{
    cout << "Data will be deleted from end" << endl;
    if (head == 0)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        temp = head;
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        cout << temp->next->data << " is deleted" << endl;
        delete (temp->next);
        temp->next = head;
    }
}
void linkedList::display()
{
    if (head == 0)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << " ";
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
        do
        {
            /* code */
            length++;
            temp = temp->next;
        } while (temp != head);
    }
    return length;
}
int main()
{
    linkedList list;
    list.createList();
    list.display();
    list.insertAtBegin();
    list.display();
    list.insertSpecific();
    list.display();
    list.insertAtEnd();
    list.display();
    // deletion
    list.deleteBegin();
    list.display();
    list.deleteEnd();
    list.display();
    list.deleteSpecific();
    list.display();
    return 0;
}