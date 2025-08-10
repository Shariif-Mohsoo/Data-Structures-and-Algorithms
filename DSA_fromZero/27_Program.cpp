#include <iostream>
#include "./helper/displayArray.cpp"
#include "./helper/getInputInArray.cpp"

void bubbleSort(int arr[], int size)
{
    bool swapped;
    for (int i = (size - 2); i >= 0; i--)
    {
        swapped = false;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == false)
        {
            /* code */
            break;
        }
    }
}

using namespace std;
int main()
{
    int arr[6] = {0, -1, 3, -3, 2, 1};
    display(arr, 6);
    bubbleSort(arr, 6);
    display(arr, 6);
    int arr1[5] = {0, 3, 2, 1, 4};
    display(arr1, 5);
    bubbleSort(arr1, 5);
    display(arr1, 5);

    getInputFromUser(arr, 6);
    display(arr, 6);
    bubbleSort(arr, 6);
    display(arr, 6);
    return 0;
}
