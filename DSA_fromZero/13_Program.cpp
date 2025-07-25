#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;
    const int INT_MAX = __INT_MAX__;
    const int INT_MIN = __WINT_MIN__;
    while (num)
    {
        rem = num % 10;
        num /= 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            ans = 0;
            break;
        }
        ans = ans * 10 + rem;
    }
    cout << "Reverse: " << ans << endl;
    return 0;
}