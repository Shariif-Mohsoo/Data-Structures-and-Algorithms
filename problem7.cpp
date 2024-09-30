/*
    TODO:
        WRITE C++ PROGRAM TO DESCRIBE THE GIVEN NUMBER IN THE POWER OF TWO.
        MEANS IF THE NUMBER LIES IN POWER OF 2 MEANS TRUE ELSE FALSE
        16        TRUE
        11        FALSE
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num < INT32_MIN || num > INT32_MAX)
        cout << "Invalid Input" << endl;
    else if (num == 0)
        cout << "False" << endl;
    else if (num == 1)
        cout << "True" << endl;
    else
    {
        int rem, dec;
        while (num != 1)
        {
            rem = num % 2;
            num /= 2;
        }
        if (rem == 0)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}