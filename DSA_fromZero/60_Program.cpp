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

void rotateMatrixBy180Degree(int arr[][4], int row, int col)
{

    cout << "\n\n"
         << endl;
    cout << "Matrix rotation at 180 degree" << endl;
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

    // Row Reverse of the matrix
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
    rotateMatrixBy180Degree(arr, 4, 4);
    return 0;
}