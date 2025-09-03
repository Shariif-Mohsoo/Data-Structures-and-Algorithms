#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void divideAnArrayIntoTwoSubArraysWithEqualSum(int arr[], int size)
{
    int sumArr = 0;
    for (int i = 0; i < size; i++)
        sumArr += arr[i];

    int prefix = 0; // denoting as left sub array sum
    int rightSubArraySum = 0;
    for (int i = 0; i < size - 1; i++)
    {
        prefix += arr[i];
        rightSubArraySum = sumArr - prefix;
        if (prefix == rightSubArraySum)
        {
            cout << "Hence Divided" << endl;
            cout << "Left sum: " << prefix << " == " << "Right sum: " << rightSubArraySum << endl;
            return;
        }
    }
    cout << "Not divided" << endl;
}

int main()
{
    // divide an array into two sub array's with equal sum problem
    int arr[8];
    arrayImplement(arr, 8, 0);
    divideAnArrayIntoTwoSubArraysWithEqualSum(arr, 8);
    return 0;
}