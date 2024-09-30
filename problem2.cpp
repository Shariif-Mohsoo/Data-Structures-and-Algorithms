/*
    TODO:
        WRITE A C++ PROGRAM TO TAKE A NUMBER INPUT AND PRINT THE
        NUMBER OF '1's BITS IT HAS.
        IF NUM IS 2 (0000...010) NUMBER OF '1's is 1.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int count = 0;
    while (num)
    {
        if (num & 1)
            count++;
        num = num >> 1;
    }
    cout << "The number of 1's: " << count << endl;
    return 0;
}