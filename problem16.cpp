/*
    TODO:
        WRITE C++ PROGRAM TO CHECK WHETHER THE OCCURANCE OF ELEMENTS
        IN AN ARRAY IS UNIQUE OR NOT IF YES RETURN TRUE ELSE FALSE.
        ARRAY = {1,2,3,3,2,6,1};
        1->2;2->2;3->2,6->1
        RETURN FALSE
        ARRAY = {1,1,2,3,3,3};
        1->2,2->1,3->3
        RETURN TRUE;
*/
#include <iostream>
using namespace std;
// FIXME: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
void sort(int[], int);
int elementOccurance(int[], int, int[]);
int uniqueOccurance(int[], int);
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
            sort(array, size);
            display(array, size);
            int occArray[100];
            int occSize;
            occSize = elementOccurance(array, size, occArray);
            display(occArray, occSize);
            if (uniqueOccurance(occArray, occSize))
                cout << "Unique Occurance";
            else
                cout << "No unique occurance";
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
void sort(int arr[], int size)
{
    int temp, flag;
    for (int i = 0; i < size - 1; i++)
    {
        flag = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag)
            break;
    }
}
int elementOccurance(int arr[], int size, int arr2[])
{
    int idx = 0;
    int count;
    for (int i = 0; i < size; i += count)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        arr2[idx++] = count;
    }
    return idx;
}
int uniqueOccurance(int array[], int size)
{
    bool flag = true;
    for (int i = 0; i < size; i += 1)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}
