/*
    FIXME: WRITE C++ PROGRAM TO FIND THE SUM OF THE ENTIRE ARRAY.
*/
#include <iostream>
using namespace std;
// TODO: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
int sum(int[], int);
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int *arr = new int[size];
    getInput(arr, size);
    display(arr, size);
    cout << "Sum: " << sum(arr, size) << endl;
    delete[] arr;
    return 0;
}
// TODO: FUNCTION DEFINITIONS
void getInput(int arr[], int size)
{
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
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}