#include <iostream>

#include "./helper/getInputInArray.cpp"
#include "./helper/displayArray.cpp"
#include "./helper/sortAnArray.cpp"

using namespace std;

void findFirstOccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int first = -1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "First: " << first << endl;
}

void findLastOccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int last = -1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "Last: " << last << endl;
}

int main()
{
    // Finding first and last position of an element in sorted array.
    int arr[6];
    getInputFromUser(arr, 6);
    display(arr, 6);
    sortAnArray(arr, 6);
    display(arr, 6);
    cout << "Enter key: ";
    int key;
    cin >> key;
    findFirstOccurance(arr, 6, key);
    findLastOccurance(arr, 6, key);
    return 0;
}
