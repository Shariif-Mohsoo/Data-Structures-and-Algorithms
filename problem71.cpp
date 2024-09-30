//write c++ program to remove the middle element from the stack.
#include<iostream>
#include<stack>
using namespace std;
void getData(stack<int>&s)
{
    int choice = 1;
    int data;
    while(choice)
    {
        cout<<"Enter data: ";
        cin>>data;
        s.push(data);
        cout<<"To continue press 1 else 0: ";
        cin>>choice;
    }cout<<endl;
}
void removeMid(stack<int>&s,int count,int size)
{
    if(count == (size/2))
    {
        cout<<"The middle element "<<s.top()<<" has been removed"<<endl;
        s.pop();
    }
    
    int top = s.top();
    s.pop();
    removeMid(s,count + 1,size);
    s.push(top);
}
int main()
{
    stack<int>s;
    getData(s);
    int count = 0;
    removeMid(s,0,s.size());
    return 0;
}