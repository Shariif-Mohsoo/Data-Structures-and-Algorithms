#include <iostream>
using namespace std;
int main()
{
    // sqrt(x)
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int mid, ans = 0, start = 1, end = num;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == num)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    cout << "Sqrt(" << ans << ") can be: " << ans << endl;
    return 0;
}
