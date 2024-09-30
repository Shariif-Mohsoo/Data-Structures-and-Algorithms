/*
    WRITE C++ PROGRAM TO SEARCH THE ITEM IN SORTED & ROTATED ARRAY.
    7 9 1 2 3
    SEARCH: 3 EXISTS OR NOT.
    HINT:
    FIND PIVOT FIRST.
    THEN THINK CONDITION AND APPLY BINARY SEARCH.
*/
#include <iostream>
using namespace std;
void getInput(int[], int);
void display(int[], int);
int getPivot(int[], int);
void binarySearch(int[], int, int, int);
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *arr = new int[size];
    getInput(arr, size);
    display(arr, size);
    int pivot = getPivot(arr, size); // getting the pivot element index.
    // cout << arr[pivot] << endl;
    int item;
    cout << "Enter item to search: ";
    cin >> item;
    if (item >= arr[pivot] && item <= arr[size - 1])
        binarySearch(arr, pivot, size - 1, item);
    else
        binarySearch(arr, 0, pivot - 1, item);
    delete[] arr;
    return 0;
}
// TODO: FUNCTION DEFINITIONS
void getInput(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter input: ";
        cin >> arr[i];
    }
    cout << endl;
}
void display(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int getPivot(int arr[], int size)
{
    int lb = 0, mid;
    int ub = size - 1;
    while (lb < ub)
    {
        mid = lb + (ub - lb) / 2;
        if (arr[mid] > arr[0])
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid;
        }
    }
    return lb;
}
void binarySearch(int arr[], int lb, int ub, int item)
{
    int mid;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        if (arr[mid] == item)
        {
            cout << "Item exist" << endl;
            return;
        }
        else if (arr[mid] < item)
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }
    cout << "Item doesn't exist" << endl;
    return;
}