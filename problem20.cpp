/*
    TODO:
        WRITE C++ PROGRAM TO FIND THE ALL INTERSECTION OF TWO ARRAYS'.
        ARRAYS MUST BE SORTED.
        ARRAY = {1,2,3,4,5,6,1,2};
        ARRAY = {1,1,2,3,3,4,4,5,6};
        OUTPUT= [1,2,3,4,5,6]
*/
#include <iostream>
using namespace std;
void getInput(int[], int);
void display(int[], int);
int intersection(int[], int, int[], int, int[]);
int main()
{
    int size1;
    cout << "Enter size of first array: ";
    cin >> size1;
    int size2;
    cout << "Enter size of second array: ";
    cin >> size2;
    int *arr1 = new int[size1];
    int *arr2 = new int[size2];
    cout << "Enter elements in first array" << endl;
    getInput(arr1, size1);
    cout << "Enter elements in second array" << endl;
    getInput(arr2, size2);
    int commonArr[100];
    int commonSize;
    commonSize = intersection(arr1, size1, arr2, size2, commonArr);
    display(commonArr, commonSize);
    delete[] arr1;
    delete[] arr2;
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
}
void display(int arr[], int size)
{
    cout << endl
         << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int intersection(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    // via two pointers approach
    int i = 0;
    int j = 0;
    int idx = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            arr3[idx] = arr1[i];
            idx++;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return idx;
}