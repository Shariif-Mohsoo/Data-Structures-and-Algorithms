//write c++ program to find a^b;via recursion
#include<iostream>
using namespace std;
int Power(int b,int p)
{
    //base case
    if(p == 0)
        return 1;
    if(p == 1)
        return b;
    int ans = Power(b,p / 2);
    if(p & 1)
    {
        return b * (ans * ans);
    }
    else
    {   
        return ans * ans;
    }
}

int main()
{
    int base,power;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    cout<<"The "<<base<<"^"<<power<<" = "<<Power(base,power);
    return 0;
}