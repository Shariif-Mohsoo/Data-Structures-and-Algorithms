/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE PEAK ELEMENT FROM MOUNTAIN ARRAY.
        ARR[I]<ARR[I+1]...ARR[I]>ARR[I-1]
        ARRAY:0 1 5 4 3         PEEK: 5
        ARRAY:1 2 6 4 5         PEEK: 6
*/
#include <iostream>
using namespace std;
// function prototypes
void getInput(int[], int);
void display(int[], int);
int mountainPeek(int[], int);
// main function
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    if (size < 3)
    {
        cout << "Size must be >= 3" << endl;
    }
    else
    {
        int *arr = new int[size];
        getInput(arr, size);
        display(arr, size);
        cout << "The peak element is : " << mountainPeek(arr, size) << endl;
        delete[] arr;
    }
    return 0;
}
// function definitions
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
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int mountainPeek(int arr[], int size)
{
    int lb = 0, mid;
    int ub = size - 1;
    while (lb < ub)
    {
        mid = lb + (ub - lb) / 2;
        if (arr[mid] < arr[mid + 1])
            lb = mid + 1;
        else
            ub = mid;
    }
    return arr[lb];
}