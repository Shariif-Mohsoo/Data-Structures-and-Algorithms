/*
    Write program to merge two sorted arrays'.
 */
#include <iostream>
using namespace std;
void getData(int[], int);
void display(int[], int);
void merge(int[], int, int[], int, int[]);
int main()
{
    int size1;
    cout << "Enter size of an first array: ";
    cin >> size1;
    int *arr1 = new int[size1];
    getData(arr1, size1);
    int size2;
    cout << "Enter size of an second array: ";
    cin >> size2;
    int *arr2 = new int[size2];
    getData(arr2, size2);
    display(arr1, size1);
    display(arr2, size2);
    int arr3[size1 + size2];
    merge(arr1, size1, arr2, size2, arr3);
    display(arr3, sizeof(arr3) / 4);
    delete[] arr1;
    delete[] arr2;
    return 0;
}
void getData(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter input: ";
        cin >> arr[i];
    }
    cout << endl;
}
void display(int arr[], int size)
{
    cout << "\nArray: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int idx = 0;
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[idx++] = arr1[i++];
        }
        else
        {
            arr3[idx++] = arr2[j++];
        }
    }
    while (i < size1)
        arr3[idx++] = arr1[i++];
    while (j < size2)
        arr3[idx++] = arr2[j++];
}