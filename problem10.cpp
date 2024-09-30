/*
    WRITE C++ PROGRAM WHERE YOU TAKE THE INPUT OF TWO NUMBERS FROM THE USER AND
    THEN GIVE THE TOTAL NUMBER OF SET BITS IN THOSE NUMBERS.
    EXAMPLE:
    6  00....0110   SET BITS 2
    7  00....0111   SET BITS 3
*/
#include <iostream>
using namespace std;
int returnOnes(int num)
{
    int bit, count = 0;
    while (num)
    {
        bit = num & 1;
        if (bit)
            count++;
        num = num >> 1;
    }
    return count;
}
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 << " SET BITS: " << returnOnes(num1) << endl;
    cout << num2 << " SET BITS: " << returnOnes(num2) << endl;
    return 0;
}