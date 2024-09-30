//Write c++ program to get the minimum cost to make the expression valid.{{}} valid, {{{}} invalid.
#include<iostream>
#include<stack>
using namespace std;
int getCost(string str)
{
    stack<int>st;
    if(str.length() % 2 == 1)
        return -1;
    for(int i = 0;i<str.length();i++){
        char ch = str.at(i);
        if(ch == '{')
            st.push(ch);
        else
        {
            if(!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(ch);
        }
    }
    int a = 0;//count for opening braces
    int b = 0;//count for closing braces
    while(!st.empty())
    {
        if(st.top() == '{')
            a++;
        else
            b++;
        st.pop();
    }
    return ((a + 1)/2 + (b + 1)/2);
}

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;
    cout<<"The minimum cost to validate the expression is: "<<getCost(str)<<endl;
    return 0;
}

// Example:
// Enter string: {{{{
// The minimum cost to validate the expression is: 2