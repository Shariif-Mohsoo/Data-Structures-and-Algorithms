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

void searchInSortedRowColWiseMatrix(int arr[][4], int row, int col, int key)
{
    int i = 0, j = col - 1;
    while (i < row && j >= 0)
    {

        if (arr[i][j] == key)
        {
            cout << "Element exist" << endl;
            return;
        }
        else if (arr[i][j] < key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "Element not exist" << endl;
}

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    display(arr, 4, 4);
    searchInSortedRowColWiseMatrix(arr, 4, 4, 7);
    searchInSortedRowColWiseMatrix(arr, 4, 4, 15);
    searchInSortedRowColWiseMatrix(arr, 4, 4, 18);

    return 0;
}
