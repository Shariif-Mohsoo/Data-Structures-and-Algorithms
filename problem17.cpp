/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE DUPLICATE ELEMENT IN AN ARRAY.
        ARRAY = {1,2,3,4,5,6,1};
        OUTPUT = 1;
        ARRAY = {1,2,3,4,5,6,3};
        OUTPUT= 3
        (1->N-1) ELEMENTS ARE UNIQUE BUT 1 ELEMENT IS REPEATED TWICE.
*/
#include <iostream>
using namespace std;
// FIXME: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
int findDuplicate(int[], int);
// TODO: MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter size of an array: ";
    cin >> size;
    if (size < INT32_MIN || size > INT32_MAX)
        cout << "Invalid Input" << endl;
    else
    {
        int *array = new int[size];
        getInput(array, size);
        display(array, size);
        cout << findDuplicate(array, size) << " is the duplicate element";
        cout << endl;
        delete[] array;
    }

    return 0;
}
// FIXME: FUNCTION DEFINITIONS
void getInput(int array[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Input: ";
        cin >> array[i];
    }
    cout << endl;
}
void display(int array[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int findDuplicate(int array[], int size)
{
    int output = 0;
    for (int i = 0; i < size; i++)
    {
        output ^= array[i];
    }
    for (int i = 1; i < size; i++)
    {
        output ^= i;
    }
    return output;
}