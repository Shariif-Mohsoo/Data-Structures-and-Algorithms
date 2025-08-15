#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void findCorrectPosition(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid, key, index = size;

    cout << "Enter key: ";
    cin >> key;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            cout << "Present at index: " << mid << endl;
            return;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
        {
            index = mid;
            end = mid - 1;
        }
    }
    cout << "Should be Present at index: " << index << endl;
}

int main()
{
    int arr[6];
    arrayImplement(arr, 6);

    findCorrectPosition(arr, 6);
    return 0;
}
