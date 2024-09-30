//write a c++ program to check whether the given expression is redundent or not.
#include<iostream>
#include<stack>
using namespace std;

bool checkRedendent(string str)
{
    stack<char>ch;
    for(int i = 0;i<str.length();i++)
    {
        char chr = str.at(i);
        if(chr == '(' || chr == '+' || chr == '-' || chr == '*' || chr =='/')
            ch.push(chr);
        else
        {
            if(chr == ')')
            {
                bool isRedundent = true;
                while(ch.top() != '(')
                {
                    char top = ch.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                        isRedundent = false;
                    ch.pop();
                }
                
                if(isRedundent)
                    return true;
                ch.pop();
            }
        }
    }
    return false;
}

int main()
{
    string str;
    cout<<"Enter the expression: ";
    cin>>str;
    if(checkRedendent(str))
        cout<<"The redundent expression"<<endl;
    else
        cout<<"The expression is not redundent"<<endl;
    return 0;
}