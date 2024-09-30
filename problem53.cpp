// TODO: WRITE PROGRAM TO CREATE 2D ARRAY DYNAMICALLY
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int columns;
    cout << "Enter number of columns: ";
    cin >> columns;
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[columns];
    }
    // 2-D array creation done.
    // input/output will be normal as we done earlier.
    // deallocating the memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}