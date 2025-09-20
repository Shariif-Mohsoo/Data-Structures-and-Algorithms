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

void rotateMatrixBy90DegreeWithSpace(int arr[][4], int row, int col)
{
    int ans[4][4];
    int x;
    for (int i = 0; i < row; i++)
    {
        x = (row - 1 - i);
        for (int j = 0; j < col; j++)
        {
            ans[j][x] = arr[i][j];
        }
    }
    cout << "Rotation at 90 degree" << endl;
    display(ans, row, col);
}

void rotateMatrixBy90DegreeWithoutSpace(int arr[][4], int row, int col)
{

    // Transpose of matrix
    cout << "\n\n"
         << endl;
    cout << "Matrix rotation at 90 degree" << endl;
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse of the matrix
    int start, end;
    for (int i = 0; i < row; i++)
    {
        start = 0, end = row - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    display(arr, row, col);
}

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    display(arr, 4, 4);
    rotateMatrixBy90DegreeWithSpace(arr, 4, 4);
    rotateMatrixBy90DegreeWithoutSpace(arr, 4, 4);
    return 0;
}