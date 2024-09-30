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
// class Queue
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
void Queue::peek()
{
    if (front == 0 && rear == 0)
        cout << "Empty Queue" << endl;
    else
        cout << front->data << " is at peak" << endl;
}
void Queue::enQue(int data)
{
    newNode = new node(data);
    if (front == 0 && rear == 0)
    {
        front = rear = newNode;
    }
    else if (newNode->data < front->data)
    {
        newNode->next = front;
        front = newNode;
    }
    else
    {
        rear = front;
        while (rear->next != 0 && rear->next->data < newNode->data)
        {
            rear = rear->next;
        }
        newNode->next = rear->next;
        rear->next = newNode;
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
        cout << front->data << " is dequeued" << endl;
        front = front->next;
        temp->next = 0;
        delete temp;
    }
}
void Queue::display()
{
    if (front == 0 && rear == 0)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            /* code */
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
void Queue::menu()
{
    cout << endl;
    cout << "=========================================" << endl;
    cout << "Enter 1 to enqueue" << endl;
    cout << "Enter 2 to dequeue" << endl;
    cout << "Enter 3 to peek" << endl;
    cout << "Enter 4 to display" << endl;
    cout << "Enter 5 to exit" << endl;
    cout << "=========================================" << endl;
    cout << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter data: ";
        int data;
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
    delete newNode;
    delete temp;
}
int main()
{
    Queue que;
    que.menu();
    return 0;
}