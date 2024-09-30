/*
    WRITE C++ PROGRAM TO MOVE ALL ZEROS IN RIGHT SIDE IN AN ARRAY.
    ARRAY: 0 1 3 0 5
    OUTPUT: 1 3 5 0 0
*/
#include <iostream>
#include <algorithm>
using namespace std;
// TODO: FUNCTION PROTOTYPES
void getInput(int[], int);
void display(int[], int);
void moveZeros(int[], int);
// FIXME: MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int *arr = new int[size];
    getInput(arr, size);
    display(arr, size);
    moveZeros(arr, size);
    display(arr, size);
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
void moveZeros(int arr[], int size)
{
    int nonZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
}