/*
    TODO:
        WRITE C++ PROGRAM THAT CONVERT DECIMAL TO BINARY
        FORMULA: ANSWER = (BIT * 10^I) + ANSWER;
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Decimal Number: ";
    cin >> num;
    int bit, answer = 0, i = 1;
    // cout << (num & 1) << endl;
    if (num > 0)
    {
        while (num)
        {
            bit = num & 1;
            answer = answer + bit * i;
            num = num >> 1;
            i *= 10;
        }
    }
    else
    {
        num = num * -1;
        while (num)
        {
            bit = num & 1;
            if (bit == 0)
                bit = 1;
            else
                bit = 0;
            answer = answer + bit * i;
            num = num >> 1;
            i *= 10;
        }
        answer = answer | 1;
    }
    cout << "Binary: " << answer << endl;
    return 0;
}