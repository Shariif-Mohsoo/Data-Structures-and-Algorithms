/*
    AGGRESSIVE COWS
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int>);
void input(vector<int> &);
int disBTC(vector<int>);
bool isPossibleSolution(vector<int>, int, int);
int main()
{
    vector<int> arr;
    input(arr);
    display(arr);
    sort(arr.begin(), arr.end());
    cout << "Difference between cows: " << disBTC(arr) << endl;
    return 0;
}
void input(vector<int> &arr)
{
    int item;
    int choice = 1;
    while (choice)
    {
        cout << "Enter Input:";
        cin >> item;
        arr.push_back(item);
        cout << "To exit press 0: ";
        cin >> choice;
    }
    return;
}
void display(vector<int> arr)
{
    cout << "Array: ";
    for (int item : arr)
    {
        cout << item << " ";
    }
    return;
}
int diffBTW(vector<int> arr)
{
    int cows;
    cout << "Enter Total number of cows: ";
    cin >> cows;
    int lb = 0;
    int maxi = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int ub = maxi;
    int mid, ans;
    while (lb <= ub)
    {
        mid = lb + (ub - lb) / 2;
        if (isPossibleSolution(arr, cows, mid))
        {
            ans = mid;
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }
    return ans;
}

bool isPossibleSolution(vector<int> arr, int cows, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == cows)
                return true;
        }
        lastPos = arr[i];
    }
    return false;
}