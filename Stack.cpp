// stack will be implemented with all possible operations
#include <iostream>
using namespace std;
class Stack
{
    int data;
    int size;
    int *stack;
    int top;

public:
    Stack();
    void push(int);
    void pop();
    void peek();
    bool isFull();
    bool isEmpty();
    void display();
    void menu();
    ~Stack();
};
Stack::Stack()
{
    cout << "Enter size of stack: ";
    cin >> size;
    stack = new int[size];
    top = -1;
}
void Stack::push(int data)
{
    if (isFull())
    {
        cout << "Overflow" << endl;
    }
    else
    {
        top = top + 1;
        stack[top] = data;
    }
}
void Stack::pop()
{
    if (isEmpty())
    {
        cout << "UnderFlow" << endl;
    }
    else
    {
        cout << stack[top] << " is poped out" << endl;
        top = top - 1;
    }
}
bool Stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
bool Stack::isFull()
{
    if (top == size - 1)
        return true;
    else
        return false;
}
void Stack::display()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        int i = top;
        while (i >= 0)
        {
            cout << stack[i] << " ";
            i = i - 1;
        }
        cout << endl;
    }
}
void Stack::peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << stack[top] << " is at peek" << endl;
    }
}
void Stack::menu()
{
    int choice;
    cout << endl;
    cout << "==============================================" << endl;
    cout << "Enter 1 to push " << endl;
    cout << "Enter 2 to pop " << endl;
    cout << "Enter 3 to peek " << endl;
    cout << "Enter 4 to display " << endl;
    cout << "Enter 5 to exit" << endl;
    cout << "==============================================" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter data: ";
        int data;
        cin >> data;
        this->push(data);
        break;
    }
    case 2:
    {
        this->pop();
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
Stack::~Stack()
{
    delete[] stack;
}
int main()
{
    Stack s;
    s.menu();
    return 0;
}