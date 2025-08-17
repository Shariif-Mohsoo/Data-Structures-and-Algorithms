#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void peakElementInArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid, key, index = size;
    while (start <= end)
    {
        mid = end + (start - end) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << "Peak Element Index: " << mid << " : " << arr[mid] << endl;
            break;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{
    int arr[6];
    arrayImplement(arr, 6, 0);
    peakElementInArray(arr, 6);
    return 0;
}
