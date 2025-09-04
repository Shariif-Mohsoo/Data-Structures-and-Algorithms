#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void largestSumContiguousSubArray(int arr[], int size)
{
    int prefix, maxi = -99999999;
    for (int i = 0; i < size; i++)
    {
        prefix = 0;
        for (int j = i; j < size; j++)
        {
            prefix += arr[j];
            maxi = max(prefix, maxi);
        }
    }
    cout << "Maximum: " << maxi << endl;
}

int main()
{
    // largestSumContiguousSubArray
    int arr[4];
    arrayImplement(arr, 4, 0);
    largestSumContiguousSubArray(arr, 4);
    return 0;
}