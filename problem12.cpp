/*
FIXME: WRITE C++ PROGRAM TO FIND THE MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY.
*/
#include <iostream>
using namespace std;
// TODO: FUNCTION PROTOTYPES
void printArray(int[], int);
int min(int[], int);
int max(int[], int);
// TODO: MAIN FUNCTION
int main()
{
    int arr[10] = {2, 23, 32, 10, 1, 5, 33, 11, 22, 21};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    cout << "Minimum: " << min(arr, size) << endl;
    cout << "Maximum: " << max(arr, size) << endl;
    return 0;
}
// FIXME: FUNCTION BODIES OR DEFINITIONS.
void printArray(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}