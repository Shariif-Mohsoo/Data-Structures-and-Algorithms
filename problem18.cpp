/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE ALL DUPLICATE ELEMENT IN AN ARRAY.
        ARRAY = {1,2,3,4,5,6,1,2};
        OUTPUT = [1,2];
        ARRAY = {1,2,3,4,3,4,5,6,1};
        OUTPUT= [3,4,1]
*/
#include <iostream>
using namespace std;
// FIXME: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
int findDuplicate(int[], int, int[]);
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
        int arr[100];
        getInput(array, size);
        display(array, size);
        int dupSize = findDuplicate(array, size, arr);
        cout << "Duplicates: ";
        display(arr, dupSize);
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
int findDuplicate(int array[], int size, int arr[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j <= size; j++)
        {
            if ((array[i] ^ array[j]) == 0)
            {
                arr[count] = array[i];
                count++;
            }
        }
    }
    return count;
}