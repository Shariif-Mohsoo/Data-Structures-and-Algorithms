
#include <iostream>
using namespace std;
void getInput(int[], int);
void display(int[], int);
void getPartition(int[], int, int);
bool isPossibleSolution(int[], int, int, int);
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *arr = new int[size];
    getInput(arr, size);
    display(arr, size);
    int painters;
    cout << endl;
    cout << "Enter the total painters:";
    cin >> painters;
    getPartition(arr, size, painters);
    delete[] arr;
    return 0;
}
void getInput(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter input/board length: ";
        cin >> arr[i];
    }
    cout << endl;
}
void display(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void getPartition(int arr[], int size, int painters)
{
    int lb = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    int ub = sum;
    int ans, mid;
    ans = -1;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        if (isPossibleSolution(arr, size, painters, mid))
        {
            ans = mid;
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    cout << "Minimum time taken by painters is: " << ans << endl;
}
bool isPossibleSolution(int arr[], int size, int painters, int mid)
{
    int paintersCount = 0;
    int unitSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (unitSum + arr[i] <= mid)
        {
            unitSum += arr[i];
        }
        else
        {
            paintersCount++;
            if (paintersCount > painters || arr[i] > mid)
                return false;
            unitSum = arr[i];
        }
    }
    return true;
}