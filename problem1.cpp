/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE DIFFERENCE BETWEEN THE SUM AND
        PRODUCT OF THE GIVEN NUMBER'S DIGIT(IF N = 123)
        PRO = 1 * 2 * 3 => 6;
        SUM = 1 + 2 + 3 => 6;
        DIF = 6 - 6     => 0;
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int rem;
    int sum = 0;
    int product = 1;
    for (; num;)
    {
        rem = num % 10;
        sum += rem;
        product *= rem;
        num /= 10;
    }
    cout << "Product: " << product << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << product - sum << endl;
    return 0;
}