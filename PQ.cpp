// here we will see how to implement the priority queue.
#include <iostream>
using namespace std;
class Queue
{
    int front;
    int rear;
    int size;
    int *queue;

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
    cout << "Enter size of queue: ";
    cin >> size;
    queue = new int[size];
    front = -1;
    rear = -1;
}
void Queue::enQue(int data)
{
    if (front == size - 1)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[front] = data;
    }
    else
    {
        int pos = rear;
        while (pos >= front)
        {
            if (data < queue[pos])
            {
                queue[pos + 1] = queue[pos];
                pos--;
            }
            else
            {
                break;
            }
        }
        queue[pos + 1] = data;
        rear = rear + 1;
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
        cout << queue[front] << " is dequeued" << endl;
        front = rear = -1;
    }
    else
    {
        cout << queue[front] << " is dequeued" << endl;
        front += 1;
    }
}
void Queue::display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Emtpy Queue" << endl;
    }
    else
    {
        int i = front;
        while (i <= rear)
        {
            cout << queue[i] << " ";
            i++;
        }
        cout << endl;
    }
}
void Queue::peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        cout << queue[front] << " is at top" << endl;
    }
}
void Queue::menu()
{
    cout << "=======================================" << endl;
    cout << "Enter 1 for enqueue" << endl;
    cout << "Enter 2 for dequeue" << endl;
    cout << "Enter 3 for peek" << endl;
    cout << "Enter 4 for display" << endl;
    cout << "Enter 5 to exit" << endl;
    cout << "=======================================" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int item;
        cout << "Enter data: ";
        cin >> item;
        this->enQue(item);
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
        cout << "Invalid input" << endl;
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