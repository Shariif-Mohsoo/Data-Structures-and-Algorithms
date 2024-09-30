/*
    WRITE C++ PROGRAM TO PRINT THE TWO ARRAY LIVE A WAVE.
*/
#include <iostream>
using namespace std;
void getInput(int[][3], int, int);
void display(int[][3], int, int);
void printLikeWave(int[][3], int, int);
int main()
{
    int arr[3][3];
    getInput(arr, 3, 3);
    display(arr, 3, 3);
    printLikeWave(arr, 3, 3);
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
void printLikeWave(int arr[][3], int row, int col)
{
    cout << "Printing like wave" << endl;
    for (int i = 0; i < col; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
    }
    cout << endl;
}