#include <iostream>
#include <vector>
using namespace std;

void majorityElement(vector<int> arr, int size)
{
    // decrease each element by 1
    for (int i = 0; i < size; i++)
        arr[i]--;
    // increase ans element by size
    for (int i = 0; i < size; i++)
        arr[arr[i] % size] += size;
    // find num who's occurance should be > size/2
    for (int i = 0; i < size; i++)
    {
        int occ = arr[i] / size;
        if (occ > size / 2)
        {
            cout << "Occurance of " << i + 1 << " : " << occ << endl;
            return;
        }
    }
    cout << "Not exist" << endl;
}

int main()
{
    // majority element problem (can be solved with moore voting algorithm)
    // majority elements(occurance of number should be greater than size / 2)
    vector<int> arr1 = {4, 3, 2, 2, 2, 7, 2};
    majorityElement(arr1, arr1.size());
    vector<int> arr2 = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    majorityElement(arr2, arr2.size());
    return 0;
}
