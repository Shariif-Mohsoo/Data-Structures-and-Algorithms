/*
    WRITE C++ PROGRAM TO SEARCH THE TARGET IN 2-D ARRAY.
    BINARY SEARCH
    NOTE:
    ARRAY MUST BE SORTED ROW WISE.
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
    int lb = 0, mid, ele;
    int ub = (row * col) - 1;
    while (lb <= ub)
    {
        /* code */
        mid = lb + (ub - lb) / 2;
        ele = arr[mid / row][mid % col]; // find the middle element in an array
        if (ele == target)
        {
            cout << "Element exist" << endl;
            return;
        }
        else if (ele > target)
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    cout << "Item doesn't exist" << endl;
}