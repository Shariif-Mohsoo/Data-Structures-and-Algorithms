//IMPLEMENT A STACK WHERE WE CAN FIND THE MINIMUM ELEMENT IN COMPLEXITY OF 0(1) AND 0(1).
#include<iostream>
#include<stack>
using namespace std;
class SpecialStack{
  stack<int>s;
  int mini;
  public:
  void push(int);
  int top();
  int pop();
  bool isEmpty();
  int getMini();
};
void SpecialStack::push(int data)
{
    if(s.empty())
    {
        s.push(data);
        mini = data;
    }
    else
    {
        if(data < mini){
            s.push(2 * data - mini);
            mini = data;
        }
        else
        {
            s.push(data);
        }
    }
}
int SpecialStack::pop()
{
    if(s.empty())
    return -1;
    int curr = s.top();
    s.pop();
    if(curr > mini)
        return curr;
    else
    {
        int prevMin = curr;
        int val = 2 * mini - curr;
        mini = val;
        return prevMin;
    }
}

int SpecialStack::top()
{
    int curr = s.top();
    if(curr < mini)
        return mini;
    else
        return curr;
}

bool SpecialStack::isEmpty()
{
    return s.empty();
}
int SpecialStack::getMini()
{
    if(s.empty())
    return -1;
    else
    return mini;
}
int main()
{
    SpecialStack s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(2);
    cout<<s.getMini()<<endl;
    return 0;
}