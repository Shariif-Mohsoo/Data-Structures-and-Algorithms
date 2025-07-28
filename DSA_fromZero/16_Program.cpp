#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number to find complement: ";
    cin >> num;
    int rem, mul = 1, ans = 0;
    while (num)
    {
        /* code */
        rem = num % 2;
        // 0->1 or 1->0
        rem = rem ^ 1;
        num /= 2;
        ans += rem * mul;
        mul *= 2;
    }
    cout << "Compliment is: " << ans << endl;
    return 0;
}