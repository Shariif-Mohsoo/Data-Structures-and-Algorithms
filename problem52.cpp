/*
    MODULAR EXPONENTIATION
    x,n and m
    x^n % m
    FAST EXPONENTIATION
 */
#include <iostream>
using namespace std;
int main()
{
    int x, n, m;
    cout << "Enter the x n and m value: ";
    cin >> x >> n >> m;
    int res = 1;
    while (n)
    {
        if (n & 1)
        {
            // odd
            res = (1LL * res * x % m) % m;
        }
        x = (1LL * x % m * x % m) % m;
        n = n >> 1;
    }
    cout << "Answer is " << res << endl;
    return 0;
}