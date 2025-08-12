#include <iostream>

#include "./helper/getInputInArray.cpp"
#include "./helper/displayArray.cpp"
#include "./helper/sortAnArray.cpp"

using namespace std;

void binarySearch(int arr[], int size)
{
    int key;
    cout << "Enter the number to search: ";
    cin >> key;
    int mid, start = 0, end = size - 1;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << key << " exists in an array" << endl;
            return;
        }
        else if (arr[mid] > key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << key << " doesn't exist in array" << endl;
}

int main()
{
    int arr[6];
    getInputFromUser(arr, 6);
    display(arr, 6);
    sortAnArray(arr, 6);
    display(arr, 6);
    binarySearch(arr, 6);
    return 0;
}
