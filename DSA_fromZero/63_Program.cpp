#include <iostream>
using namespace std;

void display(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

void binarySearchIn2DArray(int arr[][4], int row, int col, int key)
{
    int rowIdx, colIdx;
    int start = 0, end = (row * col - 1), mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        rowIdx = mid / col;
        colIdx = mid % col;
        if (arr[rowIdx][colIdx] == key)
        {
            cout << key << " Exist" << endl;
            return;
        }
        else if (arr[rowIdx][colIdx] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << key << " Not exist" << endl;
}

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    display(arr, 4, 4);
    binarySearchIn2DArray(arr, 4, 4, 15);
    binarySearchIn2DArray(arr, 4, 4, 18);
    return 0;
}