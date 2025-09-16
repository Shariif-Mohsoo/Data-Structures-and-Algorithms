#include <iostream>
using namespace std;

void transposeMatrix(int arr[][4], int row, int col)
{
    if (row != col)
    {
        cout << "Invalid input" << endl;
        return;
    }

    cout << "Transpose of matrix" << endl;
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }

    transposeMatrix(arr, 4, 4);
    return 0;
}