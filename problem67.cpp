// sort all zero's one's and two's in linked list with replacement.
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node();
};
node::node()
{
    cout << "Enter the data: ";
    cin >> data;
    next = 0;
}

class linkedList
{
    node *head;
    node *temp;
    node *newNode;

public:
    linkedList();
    void insertTheNode(node *&, node *);
    void create();
    void display();
    void performOperations();
    void sortZeroOneTwo();
};
linkedList::linkedList()
{
    head = 0;
    temp = 0;
    newNode = 0;
}
void linkedList::insertTheNode(node *&tmp, node *newNde)
{
    tmp->next = newNde;
    tmp = newNde;
}
void linkedList::create()
{
    int choice = 1;
    while (choice)
    {
        newNode = new node();
        if (head == 0)
        {
            temp = head = newNode;
        }
        {
            this->insertTheNode(temp, newNode);
        }
        cout << "To continue press 1 else 0: ";
        cin >> choice;
    }
}
void linkedList::sortZeroOneTwo()
{
    // creating lists for one two and zero
    cout << "-----------------Enter any dummy data)" << endl;
    node *zeroHead = new node;
    node *zeroTail = zeroHead;
    node *oneHead = new node;
    node *oneTail = oneHead;
    node *twoHead = new node;
    node *twoTail = twoHead;

    // traverse the entire linked list
    // also create linked list for zero,one and two
    temp = head;
    while (temp != 0)
    {
        if (temp->data == 0)
            this->insertTheNode(zeroTail, temp);
        else if (temp->data == 1)
            this->insertTheNode(oneTail, temp);
        else if (temp->data == 2)
            this->insertTheNode(twoTail, temp);
        temp = temp->next;
        cout << "Working" << endl;
    }
    // merge them;
    if (oneHead->next != 0)
    {
        zeroTail->next = oneHead->next;
        oneTail->next = 0;
    }
    else if (twoHead->next != 0)
    {
        zeroHead->next = twoHead->next;
        twoTail->next = 0;
    }
    else
    {
        zeroTail->next = 0;
    }
    if (oneHead->next != 0 && twoHead->next != 0)
    {
        oneTail->next = twoHead->next;
        twoTail->next = 0;
    }

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

void linkedList::display()
{
    cout << "Linked List: ";
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void linkedList::performOperations()
{
    linkedList list;
    list.create();
    list.display();
    list.sortZeroOneTwo();
    list.display();
}

int main()
{
    linkedList list;
    list.performOperations();
    return 0;
}