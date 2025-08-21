#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void searchKthMissingPositiveInteger(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid, k;
    cout << "Enter value of k: ";
    cin >> k;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if ((arr[mid] - mid - 1) >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Answer: " << (ans + k) << endl;
}

int main()
{
    int arr[6];
    arrayImplement(arr, 6);
    searchKthMissingPositiveInteger(arr, 6);
    return 0;
}
