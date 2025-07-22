#include <iostream>
using namespace std;
int main()
{
    /*
        Add digits
        input is 72
        ouput should be 7+2=9.
        input:249
        ouput: 2+4+9=15=1+5=6
    */
    int num;
    cout << "Enter number: ";
    cin >> num;

    while (num > 9)
    {
        /* code */
        int ans = 0, rem;
        while (num)
        {
            /* code */
            rem = num % 10;
            ans += rem;
            num /= 10;
        }
        num = ans;
    }
    cout << "Ans: " << num << endl;
    return 0;
}