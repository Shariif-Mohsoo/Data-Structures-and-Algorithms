/*
TODO: write c++ program to reverse the given number
    123 reverse 321.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int ans = 0, rem;
    // cout << sizeof(int) << endl;
    while (num)
    {
        rem = num % 10;
        ans = (ans * 10) + rem;
        // it might be possible it creates the int that is out of range of int.
        // ans * 10 < int_min => ans < int_min/10
        // ans * 10 > int_max => ans > int_max/10
        if (ans < INT32_MIN / 10 || ans > INT32_MAX / 10)
        {
            ans = 0;
            break;
        }
        num /= 10;
    }
    // cout << INT32_MAX << endl;
    // cout << INT32_MIN << endl;
    cout << "Reverse: " << ans << endl;
    return 0;
}