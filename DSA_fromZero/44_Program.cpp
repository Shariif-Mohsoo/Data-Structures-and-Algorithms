#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void pairDiff(int arr[], int size, int tar)
{
    int start = 0, diff;
    int end = 1;

    while (start < end)
    {
        diff = arr[end] - arr[start];
        if (diff > tar)
        {
            start++;
        }
        else if (diff < tar)
        {
            end++;
        }
        else if (diff == tar)
        {
            cout << arr[end] << " - " << arr[start] << "=" << tar << endl;
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
    // pairDiff problem
    int arr[6];
    arrayImplement(arr, 6, 1);
    int tar;
    cout << "Enter target: ";
    cin >> tar;
    pairDiff(arr, 6, tar);

    return 0;
}