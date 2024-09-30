/*
    TODO:
        WRITE C++ TO DO THE LINEAR SEARCH IN AN ARRAY TO FIND AN ELEMENT
        IN AN ARRAY THAT IT EXISTS IN AN ARRAY OR NOT.
*/
#include <iostream>
using namespace std;
// TODO: FUNCTION DECLARATIONS
void getInput(int[], int);
void display(int[], int);
void linearSearch(int[], int);
// TODO: MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    if (size < INT32_MIN || size > INT32_MAX)
        cout << "Invalid Input" << endl;
    else
    {
        int *arr = new int[size];
        getInput(arr, size);
        display(arr, size);
        linearSearch(arr, size);
    }
    return 0;
}
// FIXME: FUNCTION DEFINITIONS
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
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void linearSearch(int arr[], int size)
{
    int item;
    cout << "Enter an item to search: ";
    cin >> item;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            cout << "Item exits" << endl;
            return;
        }
    }
    cout << "Item doesn't exist" << endl;
}