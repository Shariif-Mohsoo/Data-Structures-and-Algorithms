//Write C++ program to reverse the string using the stack.
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str = "Mohsoo";
    stack<char>ch;
    for(int i = 0;i<str.length();i++)
    {
        char chr = str.at(i);
        ch.push(chr);
    }
    string ans="";
    while(!ch.empty())
    {
        ans += ch.top();
        // ans.push_back(chr);
        ch.pop();
    }
        
    cout<<"Reverse of "<<str<<" is "<<ans<<endl;
    return 0;
}