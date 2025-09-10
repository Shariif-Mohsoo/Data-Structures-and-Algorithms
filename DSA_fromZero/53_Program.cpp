#include <iostream>
using namespace std;

void sum2DArray(int arr1[][4], int r1, int c1, int arr2[][4])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr1[3][4] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int arr2[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    sum2DArray(arr1, 3, 4, arr2);
    return 0;
}