// write c++ program to implement the queue using stack.
#include<iostream>
#include<stack>
using namespace std;
class Queue{
  stack<int>s;
  public:
  void enQueue(int);
  int deQueue();
  bool isEmpty();
};
void Queue::enQueue(int x)
{
    s.push(x);    
}
int Queue::deQueue()
{
    // Base case: if stack is empty, return -1 (or handle empty queue)
    if (this->isEmpty()) {
        return -1;
    }

    // Get the top element from the stack
    int top = s.top();
    s.pop();

    // If this was the last element in the stack, return it (base case)
    if (this->isEmpty()) {
        return top;
    }

    // Recursively call deQueue() to remove elements until we reach the bottom
    int item = this->deQueue();

    // Push the top element back onto the stack (maintain order)
    s.push(top);

    // Return the dequeued item from the bottom
    return item;
}
bool Queue::isEmpty()
{
    if(s.empty())
    return true;
    else
    return false;
}

using namespace std;
int main()
{
    Queue que;
    que.enQueue(1);
    que.enQueue(2);
    que.enQueue(3);
    cout<<"Queue is empty: "<<que.isEmpty()<<endl;
    cout<<"First:"<<que.deQueue()<<endl;
    cout<<"Second:"<<que.deQueue()<<endl;
    cout<<"Third:"<<que.deQueue()<<endl;
    cout<<"Queue is empty: "<<que.isEmpty()<<endl;
    return 0;
}