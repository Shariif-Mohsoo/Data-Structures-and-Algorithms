#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void searchInRotatedArray(int arr[], int size)
{
    int key;
    cout << "Enter the target to search: ";
    cin >> key;
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        /* code */
        mid = end + (start - end) / 2;
        // element found
        if (arr[mid] == key)
        {
            cout << "Exists at key: " << mid << endl;
            return;
        }
        // left side sorted
        else if (arr[mid] >= arr[0])
        {

            if (arr[start] <= key && key <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // right side sorted
        else
        {
            if (arr[mid] <= key && key <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << "Element doesn't exists in rotated array" << endl;
}

int main()
{
    int arr[6];
    arrayImplement(arr, 6, 0);
    searchInRotatedArray(arr, 6);
    return 0;
}
