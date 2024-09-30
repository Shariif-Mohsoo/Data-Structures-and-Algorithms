/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE UNIQUE ELEMENT IN AN ARRAY.
        ARRAY MUST OF SIZE 2K+1.
        ARRAY = {1,2,3,3,2,6,1};
        OUTPUT = 6;
*/
#include <iostream>
using namespace std;
// FIXME: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
int uniqueElement(int[], int);
// TODO: MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter size of an array: ";
    cin >> size;
    if (size & 1 == 1)
    {
        if (size < INT32_MIN || size > INT32_MAX)
            cout << "Invalid Input" << endl;
        else
        {
            int *array = new int[size];
            getInput(array, size);
            display(array, size);
            cout << uniqueElement(array, size) << " is an unique element";
            cout << endl;
            delete[] array;
        }
    }
    else
    {
        cout << "Invalid Input; Size must be odd" << endl;
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
int uniqueElement(int array[], int size)
{
    int output = 0;
    for (int i = 0; i < size; i++)
    {
        output ^= array[i];
    }
    return output;
}