/*
    TODO:
    WRITE C++ PROGRAM TO SORT AN ARRAY THAT CONTAIN 0'S AND 1'S
*/
#include <iostream>
using namespace std;
void getInput(int[], int);
void display(int[], int);
void sort(int[], int);
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Input must be 0's and 1's" << endl;
    getInput(arr, size);
    display(arr, size);
    sort(arr, size);
    display(arr, size);
    delete[] arr;
    return 0;
}
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
    cout << endl;
    cout << "Array: ";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}
void sort(int arr[], int size)
{
    int temp;
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (arr[i] == 1 && arr[j] == 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else if (arr[i] == 0)
            i++;
        else if (arr[j] == 1)
            j--;
    }
}