#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void twoSum(int arr[], int size, int tar)
{
    int start = 0, sum = 0;
    int end = size - 1;

    while (start < end)
    {
        sum = arr[start] + arr[end];
        if (sum > tar)
        {
            end--;
        }
        else if (sum < tar)
        {
            start++;
        }
        else if (sum == tar)
        {
            cout << arr[start] << " + " << arr[end] << "=" << tar << endl;
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
    // twoSum
    int arr[5];
    arrayImplement(arr, 5, 0);
    int tar;
    cout << "Enter target: ";
    cin >> tar;
    twoSum(arr, 5, tar);

    return 0;
}