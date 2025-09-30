#include <iostream>
#include <vector>
using namespace std;

void majorityElement(vector<int> arr, int size)
{
    int candidate, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            count = 1;
            candidate = arr[i];
        }
        else
        {
            if (candidate == arr[i])
                count++;
            else
                count--;
        }
    }

    // varification of candidate.
    count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == candidate)
            count++;
    if (count > size / 2)
        cout << candidate << " exist" << endl;
    else
        cout << "Not exist" << endl;
}

int main()
{
    // majority element problem (solved with moore voting algorithm)
    vector<int> arr1 = {4, 3, 2, 2, 2, 7, 2};
    majorityElement(arr1, arr1.size());
    vector<int> arr2 = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    majorityElement(arr2, arr2.size());
    return 0;
}
