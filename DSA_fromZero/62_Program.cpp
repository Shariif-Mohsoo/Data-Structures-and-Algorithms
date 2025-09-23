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
    int start, end, mid;
    for (int i = 0; i < row; i++)
    {
        if (arr[i][0] <= key && arr[i][col - 1] >= key)
        {
            start = 0;
            end = col - 1;
            while (start <= end)
            {
                mid = (start + end) / 2;
                if (arr[i][mid] == key)
                {
                    cout << "Exist" << endl;
                    return;
                }
                else if (arr[i][mid] < key)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            cout << "Not exist" << endl;
            return;
        }
    }
}

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    display(arr, 4, 4);
    binarySearchIn2DArray(arr, 4, 4, 15);
    return 0;
}