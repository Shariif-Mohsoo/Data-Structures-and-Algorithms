//Write C++ program to check valid parenthesis.
#include<iostream>
#include<stack>
using namespace std;

bool checkExpression(string str)
{
    stack<char>ch;
    bool isCorrect = true;
    for(int i = 0;i<str.length();i++)
    {
        char chr = str.at(i);
        //if opening bracket
        if(chr == '(' || chr == '[' || chr == '{')
        {
            ch.push(str.at(i));
        }
        else
        {
            if(!ch.empty())
            {
                char top = ch.top();
                if(
                  (top == '(' && chr == ')') ||
                  (top == '{' && chr == '}')  ||
                  (top == '[' && chr == ']')
                  )
                {
                    ch.pop();
                }
                else
                {
                    isCorrect = false;
                }
            }
            else
            {
                isCorrect = false;
            }
        }
    }
    if(ch.empty())
        return isCorrect;
}
int main()
{
    string str;
    cout<<"Enter the bracket expression: ";
    cin>>str;
    if(checkExpression(str))
    {
        cout<<"parenthesis expression is valid";
    }
    else
    {
        cout<<"parenthesis expression is not valid";
    }
    return 0;
}