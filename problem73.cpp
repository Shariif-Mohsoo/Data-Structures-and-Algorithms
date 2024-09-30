//write c++ program to insert the given element in the bottom of stack.
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
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    int x = 4;
    insertAtBottom(s,x);
    return 0;
}