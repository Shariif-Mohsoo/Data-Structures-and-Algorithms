#include <iostream>
#include "./helper/displayArray.cpp"
#include "./helper/getInputInArray.cpp"

using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
}

int main()
{
    int arr[6];
    getInputFromUser(arr, 6);
    display(arr, 6);
    insertionSort(arr, 6);
    display(arr, 6);
    return 0;
}
