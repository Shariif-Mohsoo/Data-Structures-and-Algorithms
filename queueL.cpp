// queue using the linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int);
};
node::node(int data)
{
    this->data = data;
    this->next = 0;
}
// node created
class Queue
{
    node *front;
    node *rear;
    node *temp;
    node *newNode;

public:
    Queue();
    void enQue(int);
    void deQue();
    void peek();
    void display();
    void menu();
    ~Queue();
};
Queue::Queue()
{
    front = rear = 0;
}
void Queue::enQue(int data)
{
    newNode = new node(data);
    if (rear == 0 && front == 0)
    {
        rear = front = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
void Queue::deQue()
{
    if (front == 0)
    {
        cout << "Underflow" << endl;
        front = rear = 0;
    }
    else
    {
        temp = front;
        front = front->next;
        cout << temp->data << " is dequeued" << endl;
        temp->next = 0;
        delete temp;
    }
}
void Queue::peek()
{
    if (front == 0 && rear == 0)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << front->data << " is at top" << endl;
    }
}
void Queue::display()
{
    if (front == 0 && rear == 0)
        cout << "Queue is empty" << endl;
    else
    {
        temp = front;
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
void Queue::menu()
{
    cout << endl;
    cout << "==========================================" << endl;
    cout << "Press 1 to Enqueue" << endl;
    cout << "Press 2 to Dequeue" << endl;
    cout << "Press 3 to Peek" << endl;
    cout << "Press 4 to display" << endl;
    cout << "Press 5 to exit" << endl;
    cout << "==========================================" << endl;
    cout << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int data;
        cout << "Enter data: ";
        cin >> data;
        this->enQue(data);
        break;
    }
    case 2:
    {
        this->deQue();
        break;
    }
    case 3:
    {
        this->peek();
        break;
    }
    case 4:
    {
        this->display();
        break;
    }
    case 5:
    {
        cout << "Thnks Dear" << endl;
        exit(0);
    }

    default:
    {
        cout << "Invalid Input" << endl;
        this->menu();
    }
    }
    this->menu();
}
Queue::~Queue()
{
    delete front;
    delete rear;
    delete temp;
    delete newNode;
}
int main()
{
    Queue que;
    que.menu();
    return 0;
}