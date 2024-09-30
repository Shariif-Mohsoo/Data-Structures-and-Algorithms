/*
    WRITE C++ PROGRAM TO FIND THE SQUARE ROOT OF THE GIVEN NUMBER.
    USING BINARY SEARCH.
    IGNORE ABOUT THE VALUES AFTER POINT LIKE 9.22
    ANSWER IS 9 JUST.
*/
#include <iostream>
using namespace std;
int squareRoot(int);
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Square root of given number " << squareRoot(num) << endl;
    return 0;
}
int squareRoot(int num)
{
    int lb = 0;
    int ub = num;
    int mid, square, ans;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        square = mid * mid;
        if (square == num)
        {
            ans = mid;
            break;
        }
        else if (square > num)
            ub = mid - 1;
        else
        {
            ans = mid;
            lb = mid + 1;
        }
    }
    return ans;
}