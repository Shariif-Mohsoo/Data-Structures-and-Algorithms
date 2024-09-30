// queue will be implemented with all possible operations
#include <iostream>
using namespace std;

class Queue
{
    int front;
    int rear;
    int *queue;
    int size;

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
    cout << "Enter size: ";
    cin >> size;
    queue = new int[size];
    front = rear = -1;
}
void Queue::enQue(int data)
{
    if (rear == size - 1)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear += 1;
        queue[rear] = data;
    }
}
void Queue::deQue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow" << endl;
    }
    else if (front == rear)
    {
        cout << queue[front] << " is deleted" << endl;
        front = rear = -1;
    }
    else
    {
        cout << queue[front] << " is deleted" << endl;
        front = front + 1;
    }
}
void Queue::peek()
{
    if (front == -1 && rear == -1)
        cout << "Queue is empty" << endl;
    else
        cout << queue[front] << " is at top" << endl;
}
void Queue::display()
{
    if (front == -1 && rear == -1)
        cout << "Queue is empty" << endl;
    else
    {
        int i = front;
        while (i <= rear)
        {
            cout << queue[i] << " ";
            i = i + 1;
        }
        cout << endl;
    }
}
void Queue::menu()
{
    cout << endl;
    cout << "======================================" << endl;
    cout << "Enter 1 to enqueue" << endl;
    cout << "Enter 2 to dequeue" << endl;
    cout << "Enter 3 to peek" << endl;
    cout << "Enter 4 to display" << endl;
    cout << "Enter 5 to exit" << endl;
    cout << "======================================" << endl;
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
        cout << "Thnks dear" << endl;
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
    delete[] queue;
}
int main()
{
    Queue que;
    que.menu();
    return 0;
}