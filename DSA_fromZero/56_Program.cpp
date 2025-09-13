#include <iostream>
using namespace std;

void waveForm(int arr[][4], int row, int col)
{
    cout << endl;
    cout << "Wave form " << endl;
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
                cout << arr[i][j] << "\t";
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
                cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    // wave form problem
    int arr[3][4] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6, 11, 12};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    waveForm(arr, 3, 4);
    return 0;
}