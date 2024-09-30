/*
    BOOK ALLOCATION PROBLEM.
*/
#include <iostream>
using namespace std;
void getInput(int[], int);
void display(int[], int);
int getSum(int[], int);
bool isPossibleSolution(int[], int, int, int);
void binarySearch(int[], int, int, int);
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *arr = new int[size];
    getInput(arr, size);
    display(arr, size);
    int sum = getSum(arr, size);
    int students;
    cout << "Enter total number of students which will be allocated books: ";
    cin >> students;
    if (students < 2)
        cout << "Students must be two or more" << endl;
    else
        binarySearch(arr, size, students, sum);
    delete[] arr;
    return 0;
}
void getInput(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter book pages: ";
        cin >> arr[i];
    }
    cout << endl;
}
void display(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}
void binarySearch(int arr[], int size, int students, int sum)
{
    int lb = 0;
    int ub = sum;
    int mid, ans = -1;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        if (isPossibleSolution(arr, size, students, mid))
        {
            ans = mid;
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    cout << "The answer is " << ans << endl;
}
bool isPossibleSolution(int arr[], int size, int students, int mid)
{
    int pagesSum = 0;
    int student = 1;
    for (int i = 0; i < size; i++)
    {
        if ((pagesSum + arr[i]) <= mid)
        {
            pagesSum += arr[i];
        }
        else
        {
            student++;
            if (student > students || arr[i] > mid)
                return false;
            pagesSum = arr[i];
        }
    }
    return true;
}