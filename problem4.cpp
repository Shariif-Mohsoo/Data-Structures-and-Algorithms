/*
    FIXME:
        WRITE C++ TO CONVERT BINARY TO DECIMAL.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter Binary Number: ";
    cin >> num;
    int i = 0, ans = 0;
    while (num)
    {
        if (num % 10 == 1)
            ans = ans + pow(2, i);
        num = num / 10;
        i++;
    }
    cout << "Decimal: " << ans << endl;
    return 0;
}