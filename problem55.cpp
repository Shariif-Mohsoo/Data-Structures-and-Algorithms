#include<iostream>
using namespace std;
void reverse(string &str,int lb,int ub)
{
    if(lb>ub) return;
    swap(str.at(lb),str.at(ub));
    lb++;
    ub--;
    reverse(str,lb,ub);
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<str<<endl;
    reverse(str,0,str.length() - 1);
    cout<<str<<endl;
    return 0;
}