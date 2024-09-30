/*
    WRITE C++ PROGRAM TO TAKE INPUT AN ARRAY AND THEN
    SEARCH ELEMENT FROM AN ARRAY ACCORDING TO BINARY
    SEARCH.
    NOTE:
        FOR BINARY SEARCH ARRAY MUST BE SORTED
    COMPLEXITY:
        <10^8; O(logn)
*/
#include <iostream>
using namespace std;
// FUNCTION DECLARATIONS
void getInput(int[], int);
void sort(int[], int);
void display(int[], int);
void binarySearch(int[], int);
// MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *array = new int[size];
    getInput(array, size);
    display(array, size);
    sort(array, size);
    display(array, size);
    binarySearch(array, size);
    delete[] array;
    return 0;
}
// FUNCTION DEFINITIONS
void getInput(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter input: ";
        cin >> arr[i];
    }
    cout << endl;
}
void sort(int arr[], int size)
{
    int temp;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void display(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void binarySearch(int arr[], int size)
{
    int item;
    cout << "Enter the item to search: ";
    cin >> item;
    int lb = 0, mid, ub = size - 1;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        if (arr[mid] == item)
        {
            cout << item << " exist's" << endl;
            return;
        }
        else if (arr[mid] > item)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    cout << item << " doesn't exist" << endl;
}