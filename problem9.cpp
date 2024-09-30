/*
    WRITE C++ PROGRAM FOR THIS GIVEN SNARIO:
    YOU ARE GIVEN A CERTAIN AMOUNT SUPPOSE (1221); YOU NEED TO SPECIFY NUMBER OF 100 RUPEES NOTES',
    50 RUPEES NOTES,20 RUPEES NOTES,10 RUPEES NOTES AND 1 RUPEES COIN'S.
*/
#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount: ";
    cin >> amount;
    int hundred, fifty, twenty, ten, one;
    hundred = amount / 100; // total notes
    int remain_1 = amount - (hundred * 100);
    if (remain_1 != 0)
    {
        fifty = remain_1 / 50; // total notes
        int remain_2 = remain_1 - (fifty * 50);
        if (remain_2 != 0)
        {
            twenty = remain_2 / 20; // total notes
            int remain_3 = remain_2 - (twenty * 20);
            if (remain_3 != 0)
            {
                ten = remain_3 / 10; // totes notes;
                int remain_4 = remain_3 - (ten * 10);
                if (remain_4 != 0)
                {
                    one = remain_4 / 1;
                }
            }
        }
    }
    cout << "Total Hundred Rupees Notes: " << hundred << endl;
    cout << "Total Fifty Rupees Notes: " << fifty << endl;
    cout << "Total Twenty Rupees Notes: " << twenty << endl;
    cout << "Total Ten Rupees Notes: " << ten << endl;
    cout << "Total One Rupees Coins: " << one << endl;
    return 0;
}