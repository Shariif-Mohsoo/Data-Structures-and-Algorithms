// stack using linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int);
};
node ::node(int data)
{
    this->data = data;
    this->next = 0;
}
// node created successfully
class Stack
{
    node *top;
    node *temp;
    node *newNode;

public:
    Stack();
    void push(int);
    void pop();
    void peek();
    void display();
    void menu();
    ~Stack();
};
Stack::Stack()
{
    top = 0;
    temp = 0;
    newNode = 0;
}
void Stack::push(int data)
{
    newNode = new node(data);
    newNode->next = top;
    top = newNode;
}
void Stack::pop()
{
    if (top == 0)
        cout << "Stack is empty" << endl;
    else
    {
        temp = top;
        cout << temp->data << " is poped out" << endl;
        top = top->next;
        temp->next = 0;
        delete temp;
    }
}
void Stack::peek()
{
    if (top == 0)
        cout << "List is empty" << endl;
    else
        cout << top->data << " is at top" << endl;
}
void Stack ::display()
{
    if (top == 0)
        cout << "Stack is empty" << endl;
    else
    {
        temp = top;
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
void Stack::menu()
{
    cout << endl;
    cout << "========================================" << endl;
    cout << "Enter 1 to push" << endl;
    cout << "Enter 2 to pop" << endl;
    cout << "Enter 3 to peek" << endl;
    cout << "Enter 4 to display" << endl;
    cout << "Enter 5 to exit" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int data;
        cout << "Enter data: ";
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
Stack::~Stack()
{
    delete top;
    delete temp;
    delete newNode;
}
int main()
{
    Stack s;
    s.menu();
    return 0;
}