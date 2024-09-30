/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE ALL INTERSECTION OF TWO ARRAYS'.
        ARRAY = {1,2,3,4,5,6,1,2};
        ARRAY = {1,2,3,4,3,4,5,6,1};
        OUTPUT= [1,2,3,4,5,6]
*/
#include <iostream>
using namespace std;
// FIXME: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
int findIntersection(int[], int, int[], int, int[]);
// TODO: MAIN FUNCTION
int main()
{
    int size1;
    cout << "Enter size of first array: ";
    cin >> size1;

    int size2;
    cout << "Enter size of second array: ";
    cin >> size2;

    if (size1 < INT32_MIN || size1 > INT32_MAX || size2 < INT32_MIN || size2 > INT32_MAX)
        cout << "Invalid Input" << endl;
    else
    {
        int *array1 = new int[size1];
        int *array2 = new int[size2];
        int arr[100];
        cout << "First Array Input" << endl;
        getInput(array1, size1);
        cout << "Second Array Input" << endl;
        getInput(array2, size2);
        cout << endl;
        int dupSize = findIntersection(array1, size1, array2, size2, arr);
        cout << "Duplicates: ";
        display(arr, dupSize);
        cout << endl;
        delete[] array1;
        delete[] array2;
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
int findIntersection(int array1[], int size1, int array2[], int size2, int arr[])
{
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j <= size2; j++)
        {
            // TODO: IF THE ARRAYS ARE SORTED THEN
            //  if (array1[i] < array2[j])
            //      break;
            if ((array1[i] ^ array2[j]) == 0)
            {
                arr[count] = array1[i];
                array2[j] = INT32_MIN;
                count++;
                break;
            }
        }
    }
    return count;
}