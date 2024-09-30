/*
    FIXME:
        WRITE C++ PROGRAM TO RETURN NTH FIBO NACII TERM.
    0,1,1,2,3,5,8......
    n = 5;//3
    n = 6;//5
*/
#include <iostream>
using namespace std;
int fibo(int n)
{
    int a = 0;
    int b = 1;
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else
    {
        int nxt;
        for (int i = 1; i <= (n - 2); i++)
        {
            nxt = a + b;
            a = b;
            b = nxt;
        }
        return nxt;
    }
}
int main()
{
    int term;
    cout << "Enter Term number: ";
    cin >> term;
    cout << "Number at that term is " << fibo(term) << endl;
    return 0;
}