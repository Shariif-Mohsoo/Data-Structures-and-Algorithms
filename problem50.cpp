/*
    WRITE C++ PROGRAM TO SEARCH THE TARGET IN 2-D ARRAY.
    BINARY SEARCH

    NOTE:
    ARRAY MUST BE SORTED ROW WISE AND COLUMN WISE.
    1 4 7
    2 5 8
    3 6 9
*/
#include <iostream>
using namespace std;
void getInput(int[][3], int, int);
void display(int[][3], int, int);
void searchItem(int[][3], int, int);
int main()
{
    int arr[3][3];
    getInput(arr, 3, 3);
    display(arr, 3, 3);
    searchItem(arr, 3, 3);
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
void searchItem(int arr[][3], int row, int col)
{
    int target;
    cout << "Enter the item to search: ";
    cin >> target;
    int rowIndex = 0;
    int colIndex = col - 1;
    int ele;
    while (rowIndex < row && colIndex >= 0)
    {
        /* code */
        ele = arr[rowIndex][colIndex]; // suppose right most element as the mid
        if (ele == target)
        {
            cout << "Element exist" << endl;
            return;
        }
        else if (ele > target)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
        }
    }
    cout << "Item doesn't exist" << endl;
}