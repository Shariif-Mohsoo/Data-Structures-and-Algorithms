#include <iostream>
using namespace std;

void spiralForm(int arr[][4], int row, int col)
{
    cout << "Spiral form" << endl;
    int top = 0, right = (col - 1), bottom = (row - 1), left = 0;
    while (left <= right && top <= bottom)
    {
        // Print top
        for (int i = left; i <= right; i++)
        {
            /* code */
            cout << arr[top][i] << "\t";
        }
        top++;

        // Print right
        for (int i = top; i <= bottom; i++)
        {
            /* code */
            cout << arr[i][right] << "\t";
        }
        right--;

        // Print bottom
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                /* code */
                cout << arr[bottom][i] << "\t";
            }
            bottom--;
        }

        // Print left
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                /* code */
                cout << arr[i][left] << "\t";
            }
            left++;
        }
        cout << endl;
    }
}

int main()
{
    // spiral form problem
    int arr[3][4] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6, 11, 12};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    spiralForm(arr, 3, 4);
    return 0;
}