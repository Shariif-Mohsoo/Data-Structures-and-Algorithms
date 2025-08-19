#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void minInRotatedArray(int arr[], int size)
{
    int start = 0, end = size - 1, ans = arr[0];
    int mid, key, index = size;
    while (start <= end)
    {
        mid = end + (start - end) / 2;
        // left side sorted
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        // right side sorted
        else if (arr[mid] < arr[0])
        {
            // suppose current can be an answer
            ans = arr[mid];
            end = mid - 1;
        }
    }
    cout << "Ans: " << ans << endl;
}

int main()
{
    int arr[6];
    arrayImplement(arr, 6, 0);

    minInRotatedArray(arr, 6);
    return 0;
}
