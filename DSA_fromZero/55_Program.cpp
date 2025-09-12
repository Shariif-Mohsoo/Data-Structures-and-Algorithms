#include <iostream>
using namespace std;

void sumOfDiagonalElements(int arr[][3], int r1, int c1)
{
    int first = 0;
    for (int i = 0; i < r1; i++)
        first += arr[i][i];
    int second = 0;
    for (int i = 0, j = c1 - 1; i < r1 && j >= 0; i++, j--)
        second += arr[i][j];

    cout << "First diagonal: " << first << "\n\t\t second diagonal: " << second << endl;
}

int main()
{
    int arr1[3][3] = {7, 8, 9, 5, 6, 7, 5, 4, 5};
    sumOfDiagonalElements(arr1, 3, 3);
    int arr2[3][3] = {22, 43, 44, 45, 26, 30, 31, 33, 33};
    sumOfDiagonalElements(arr2, 3, 3);
    int arr3[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    sumOfDiagonalElements(arr3, 3, 3);

    return 0;
}