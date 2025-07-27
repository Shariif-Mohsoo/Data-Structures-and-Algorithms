#include <iostream>
using namespace std;
int main()
{
    int num, copy;
    cout << "Enter number: ";
    cin >> num;
    copy = num;
    if (copy < 0)
    {
        cout << "Num is not palindrome" << endl;
        return 0;
    }
    int rem, ans = 0;
    while (copy)
    {
        rem = copy % 10;
        copy /= 10;
        ans = ans * 10 + rem;
    }
    if (ans == num)
        cout << "Num is palindrome" << endl;
    else
        cout << "Num is not palindrome" << endl;

    return 0;
}