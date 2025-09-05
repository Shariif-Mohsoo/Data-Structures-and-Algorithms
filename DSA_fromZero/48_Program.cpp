#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void largestSumContiguousSubArray(int arr[], int size)
{
    int prefix = 0, maxi = -99999999;
    for (int i = 0; i < size; i++)
    {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0) // if prefix is < 0 make it 0 as per kadane's algo.
            prefix = 0;
    }
    cout << "Maximum: " << maxi << endl;
}

int main()
{
    // largestSumContiguousSubArray with the help of Kadane's algorithm. O(n)
    int arr[4];
    arrayImplement(arr, 4, 0);
    largestSumContiguousSubArray(arr, 4);
    return 0;
}