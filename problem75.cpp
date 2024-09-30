//write c++ program to sort the stack without loop
#include<iostream>
#include<stack>
using namespace std;
//function prototype
void insertSorted(stack<int>&,int);

void sortStack(stack<int>&s)
{
    if(s.empty())
        return;
    int top = s.top();
    s.pop();
    
    sortStack(s);
    
    //insert element in sorted order
    insertSorted(s,top);
}
void insertSorted(stack<int>&s,int num)
{
    if(s.empty() || s.top() < num)
    {
        s.push(num);
        return;
    }
    int top = s.top();
    s.pop();
    insertSorted(s,num);
    s.push(top);
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(4);
    s.push(3);
    s.push(0);
    s.push(2);
    sortStack(s);
     // Copying the stack to preserve the original
    stack<int> tempStack = s;

    cout << "Stack elements are: " << endl;

    // Displaying elements without removing from the original stack
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";  // Access the top element
        tempStack.pop();                 // Remove the top element from the copied stack
    }

    cout << endl;
    return 0;
}