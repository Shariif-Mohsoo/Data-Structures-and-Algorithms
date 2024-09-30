/*
TODO: Write C++ program to find the complement of the base 10.
        10: (1010) => (0101) => 5
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    // cout << ~num << endl;
    if (num < 0 || num > INT32_MAX)
        cout << "Invalid Input" << endl;
    else
    {
        // TODO: CODE FOR BEGINNERS
        //  int bin;
        //  int i = 1;
        //  int res = 0;
        //  while (num)
        //  {
        //      bin = num & 1;
        //      if (bin == 0)
        //          bin = 1;
        //      else
        //          bin = 0;
        //      res = (bin * i) + res;
        //      num = num >> 1;
        //      i *= 10;
        //  }
        //  i = 0;
        //  int rem, deci = 0;
        //  if(num == 0)
        //    deci = 1;
        //  else
        //  {
        //  while (res)
        //  {
        //      rem = res % 10;
        //      if (rem == 1)
        //      {
        //          deci += pow(2, i);
        //      }
        //      i++;
        //      res /= 10;
        //  }
        // }
        // FIXME: ADVANCE LEVEL
        int deci;
        int copy = num;
        if (copy == 0)
        {
            deci = 1;
        }
        else
        {
            int mask = 0;
            while (copy)
            {
                mask = (mask << 1) | 1;
                copy = copy >> 1;
            }
            deci = (~num) & mask;
        }
        cout << "The compliment of the given decimal is " << deci << endl;
    }
    return 0;
}