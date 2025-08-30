#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void segregate0And1(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
}

int main()
{
    // Segregate 0s and 1s
    int arr[6];
    arrayImplement(arr, 6, 0);
    segregate0And1(arr, 6);

    cout << "After segregate" << endl;
    for (int i = 0; i < 6; i++)
        cout << arr[i] << endl;

    return 0;
}