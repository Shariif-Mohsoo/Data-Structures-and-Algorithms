#include <iostream>
using namespace std;
int findZero(int num)
{
    int count = 0;
    while (num >= 5)
    {
        count += num / 5;
        num /= 5;
    }
    return count;
}
int main()
{
    // Find trailing zero in the factorial
    // !8=>40320=> count of zero in the last => here only one zero in the last so answer will be 1.
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Trailing zero in factorial: " << findZero(num) << endl;
    return 0;
}
