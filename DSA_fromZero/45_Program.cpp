#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void twoMul(int arr[], int size, int tar)
{
    int start = 0, mul;
    int end = size - 1;

    while (start < end)
    {
        mul = arr[start] * arr[end];
        if (mul > tar)
        {
            end--;
        }
        else if (mul < tar)
        {
            start++;
        }
        else if (mul == tar)
        {
            cout << arr[start] << " -* " << arr[end] << "=" << tar << endl;
            break;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
}

int main()
{
    // twoMul problem
    int arr[6];
    arrayImplement(arr, 6, 1);
    int tar;
    cout << "Enter target: ";
    cin >> tar;
    twoMul(arr, 6, tar);

    return 0;
}