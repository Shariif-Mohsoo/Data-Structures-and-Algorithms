//write c++ program to reverse stack.
#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int num)
{
    if(s.empty())
    {
        cout<<num<<" has been insertedAtBottom"<<endl;
        s.push(num);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s,num);
    s.push(top);
}
void reverseStack(stack<int>&s)
{
    if(s.empty()) return;
    int top = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,top);
}
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverseStack(s);
    return 0;
}