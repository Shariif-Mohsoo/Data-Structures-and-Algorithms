/*
    WRITE C++ PROGRAM TO SPIRAL PRINT THE 2-D ARRAY.
    1 2 3
    4 5 6
    7 8 9
    OUTPUT:
    1 2 3 6 9 8 7 4 5
*/
#include <iostream>
using namespace std;
void getInput(int[][3], int, int);
void display(int[][3], int, int);
void spiralPrint(int[][3], int, int);
int main()
{
    int arr[3][3];
    getInput(arr, 3, 3);
    display(arr, 3, 3);
    spiralPrint(arr, 3, 3);
    return 0;
}
void getInput(int arr[][3], int row, int col)
{
    cout << "Enter input in an array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the input: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
void display(int arr[][3], int row, int col)
{
    cout << "Array:===> " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void spiralPrint(int arr[][3], int row, int col)
{
    int count = 0;
    int total = row * col;
    int rowStart = 0;
    int rowEnd = row - 1;
    int colStart = 0;
    int colEnd = col - 1;
    while (count < total)
    {
        // print the first row;
        for (int i = rowStart; count < total && i <= rowEnd; i++)
        {
            cout << arr[rowStart][i] << " ";
            count++;
        }
        rowStart++;
        // now forget the row you print out.
        // printing the last column
        for (int i = rowStart; count < total && i <= rowEnd; i++)
        {
            cout << arr[i][colEnd] << " ";
            count++;
        }
        colEnd--;
        // now forget the column you print
        // printing the ending row
        for (int i = colEnd; count < total && i >= colStart; i--)
        {
            cout << arr[rowEnd][i] << " ";
            count++;
        }
        rowEnd--;
        // now forget the row you print
        // printing the starting column
        for (int i = rowEnd; count < total && i >= rowStart; i--)
        {
            cout << arr[i][colStart] << " ";
            count++;
        }
        colStart++;
    }
}