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

void rotateMatrixBy90DegreeAntiClockwise(int arr[][4], int row, int col)
{
    // Transpose of matrix
    cout << "\n\n"
         << endl;
    cout << "Matrix rotation at 90 degree anticlockwise" << endl;
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    int start, end;
    // Col reverse of the matrix
    for (int j = 0; j < col; j++)
    {
        start = 0, end = row - 1;
        while (start < end)
        {
            swap(arr[start][j], arr[end][j]);
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
    rotateMatrixBy90DegreeAntiClockwise(arr, 4, 4);
    return 0;
}