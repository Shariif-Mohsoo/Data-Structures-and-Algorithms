/*
    TODO:
        WRITE C++ PROGRAM TO SWAP THE ALTERNATES IN AN ARRAY.
        ARRAY = {1,2,3,4,5,6};
        OUTPUT = {2,1,4,3,6,5};
*/
#include <iostream>
using namespace std;
// FIXME: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
void alterAnArray(int[], int);
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
        alterAnArray(array, size);
        display(array, size);
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
void alterAnArray(int array[], int size)
{
    int temp;
    for (int i = 0; i < (size - 1); i += 2)
    {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}
