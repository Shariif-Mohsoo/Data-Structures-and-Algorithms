/*
    WRITE C++ PROGRAM TO FIND THE ROW WISE SUM 2-D ARRAY .
*/
#include <iostream>
using namespace std;
void getInput(int[][3], int, int);
void display(int[][3], int, int);
void findRowSum(int[][3], int, int);
int main()
{
    int arr[3][3];
    getInput(arr, 3, 3);
    display(arr, 3, 3);
    findRowSum(arr, 3, 3);
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
void findRowSum(int arr[][3], int row, int col)
{
    int sum;
    int largeRow = INT32_MIN;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > largeRow)
        {
            largeRow = sum;
            count++;
        }
        cout << "Sum of row: " << i << " is: " << sum << endl;
    }
    cout << "The Row Number " << count << " is large row: " << largeRow << endl;
}
