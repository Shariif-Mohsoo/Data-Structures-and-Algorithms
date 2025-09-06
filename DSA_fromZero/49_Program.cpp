#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void maxDifferenceBetweenTwoElements(int arr[], int size)
{
    int maxi = -99999999;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            maxi = max(maxi, arr[j] - arr[i]);
        }
    }
    cout << "Maximum Difference: " << maxi << endl;
}

int main()
{
    // maxDifferenceBetweenTwoElements
    int arr[8];
    arrayImplement(arr, 8, 0);
    maxDifferenceBetweenTwoElements(arr, 8);
    return 0;
}