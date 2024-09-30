/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE TRIPLET SUM FROM THE GIVEN ARRAY.
        ARRAY = [1,2,3,4,5];
        IF N = 6;
        OUTPUT:
            1,2,3
*/
#include <iostream>
using namespace std;
// function prototypes
void getInput(int[], int);
void display(int[], int);
void pairSum(int[], int, int);
int main()
{
    int size;
    cout << "Enter size of an array: ";
    cin >> size;
    if (size < INT32_MIN || size > INT32_MAX)
    {
        cout << "Invalid Input" << endl;
    }
    else
    {
        int *arr = new int[size];
        getInput(arr, size);
        display(arr, size);
        int val;
        cout << "Enter Value to get pair sum: ";
        cin >> val;
        pairSum(arr, size, val);
        delete[] arr;
    }
    return 0;
}
void getInput(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Input: ";
        cin >> arr[i];
    }
    cout << endl;
}
void display(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void pairSum(int arr[], int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
                if ((arr[i] + arr[j] + arr[k]) == val)
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
        }
    }
}