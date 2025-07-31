#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool armStrong(int n, int digits)
{
    int num = n, rem, ans = 0;
    while (n)
    {
        /* code */
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digits);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}

int main()
{
    // Armstrong 23->2digits->2^2 + 3^2 = 13; now (13 == 23) no; so not armString else armStrong.
    int n;
    cout << "Enter number: ";
    cin >> n;
    int digits = countDigits(n);
    cout << "Armstrong: " << armStrong(n, digits) << endl;
    return 0;
}
