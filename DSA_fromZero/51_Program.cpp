#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void threeSum(int arr[], int size, int val)
{
    bool x = false;
    int ans, start, end, sum = 0;
    for (int i = 0; i < size - 2; i++)
    {
        ans = val - arr[i];
        start = i + 1;
        end = size - 1;
        while (start < end)
        {
            /* code */
            sum = arr[start] + arr[end];
            if (sum == ans)
                x = true;
            else if (sum > ans)
                end--;
            else
                start++;
        }
    }
    if (x)
        cout << "sum exist" << endl;
    else
        cout << "sum not exist" << endl;
}

int main()
{
    // maxDifferenceBetweenTwoElements
    int arr[6];
    arrayImplement(arr, 6, 1);
    threeSum(arr, 6, 13);
    return 0;
}