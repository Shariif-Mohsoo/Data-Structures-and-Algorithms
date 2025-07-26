#include <iostream>
using namespace std;
int main()
{
    // Pow of 2.
    int num;
    cout << "Enter number to check whether it is pow of 2 or not: ";
    cin >> num;
    if (num < 1)
    {
        cout << "Invalid";
        return 0;
    }
    bool flag = true;
    while (num != 1)
    {
        if (num % 2 == 1)
        {
            flag = false;
            break;
        }
        num /= 2;
    }
    if (flag)
    {
        cout << "Given number is pow of 2" << endl;
    }
    else
    {
        cout << "Given number is not pow of 2" << endl;
    }
    return 0;
}