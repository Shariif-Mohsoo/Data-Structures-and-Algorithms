#include <iostream>
using namespace std;

void printRowIndexWithMaxSum(int arr[][4], int r1, int c1)
{
    int sum, index;
    int max = -999999;
    for (int i = 0; i < r1; i++)
    {
        sum = 0;
        for (int j = 0; j < c1; j++)
        {
            sum += arr[i][j];
        }
        if (max < sum)
        {
            max = sum;
            index = i;
        }
    }
    cout << index << " idx has max sum " << max << endl;
}

int main()
{
    int arr1[3][4] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    printRowIndexWithMaxSum(arr1, 3, 4);
    int arr2[3][4] = {22, 43, 44, 45, 26, 27, 28, 39, 30, 31, 33, 33};
    printRowIndexWithMaxSum(arr2, 3, 4);
    return 0;
}