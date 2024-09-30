//PROGRAM TO CHECK WHETHER THE GIVEN STRING IS PALINDROM OR NOT.
#include<iostream>
using namespace std;
bool isPalindrome(string str,int lb,int ub)
{
    while(lb>ub) return true;
    if(str.at(lb)!=str.at(ub))
        return false;
    else
        return isPalindrome(str,++lb,--ub);
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    if(isPalindrome(str,0,str.length() - 1))
    {
        cout<<"PALINDROM"<<endl;
    }
    else
    {
        cout<<"PALINDROM NO"<<endl;
    }
    return 0;
}