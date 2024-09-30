/*
    TODO:
        WRITE C++ PROGRAM FIND THE RIGHT MOST OCCURRENCE AND LEFT MOST
        OCCURRENCE OF GIVEN ELEMENT IN AN SORTED ARRAY; IF ITEM DOESN'T
        EXIST SIMPLY RETURN -1 ELSE RETURN INDEX AT WHICH ITEM EXIST.
        Array: 1 1 1 1 2 3
        key:1
        output:
            leftmost occurrence is at index 0;
            rightmost occurrence is at index 3;
*/
#include <iostream>
using namespace std;
// FUNCTION PROTOTYPES
void getInput(int[], int);
void display(int[], int);
int leftMost(int[], int, int);
int rightMost(int[], int, int);
// MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter size of an array: ";
    cin >> size;
    int *arr = new int[size];
    getInput(arr, size);
    display(arr, size);
    cout << "Enter item: ";
    int item;
    cin >> item;
    cout << "The left most occurrence of " << item << " is " << leftMost(arr, size, item) << endl;
    cout << "The right most occurrence of " << item << " is " << rightMost(arr, size, item) << endl;
    delete[] arr;
    return 0;
}
// FUNCTION DEFINITIONS
void getInput(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Input: ";
        cin >> arr[i];
    }
    cout << endl;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int leftMost(int arr[], int size, int item)
{
    int lb = 0, mid, ans = -1;
    int ub = size - 1;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        if (arr[mid] == item)
        {
            ans = mid;
            ub = mid - 1;
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
    return ans;
}
int rightMost(int arr[], int size, int item)
{
    int lb = 0, mid, ans = -1;
    int ub = size - 1;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        if (arr[mid] == item)
        {
            ans = mid;
            lb = mid + 1;
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
    return ans;
}