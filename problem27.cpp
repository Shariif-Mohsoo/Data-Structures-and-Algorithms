/*
    WRITE C++ PROGRAM TO FIND PIVOT ELEMENT IN AN ARRAY.
    ARRAY: 4,5,1,2,3
    PIVOT: 1
    HINT: SMALLEST NUMBER WILL BE THE PIVOT.
    TIME COMPLEXITY MUST BE: O(logn)
*/
#include <iostream>
using namespace std;
// TODO: FUNCTION PROTOTYPES
void getInput(int[], int);
void display(int[], int);
int returnPivot(int[], int);
// FIXME: MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int *arr = new int[size];
    getInput(arr, size);
    display(arr, size);
    cout << returnPivot(arr, size) << " is pivot element" << endl;
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
int returnPivot(int arr[], int size)
{
    int lb = 0;
    int ub = size - 1;
    int mid;
    while (lb < ub)
    {
        mid = lb + (ub - lb) / 2;
        if (arr[mid] > arr[0])
            lb = mid + 1;
        else
            ub = mid;
    }
    return arr[lb];
}