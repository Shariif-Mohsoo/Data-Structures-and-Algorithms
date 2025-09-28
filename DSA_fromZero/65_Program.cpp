#include <iostream>
#include <vector>
using namespace std;

void findMissingAndRepeatingNum(vector<int> arr, int size)
{
    // decrease each element by 1
    for (int i = 0; i < size; i++)
        arr[i]--;
    // increase ans element by size
    for (int i = 0; i < size; i++)
        arr[arr[i] % size] += size;
    // find missing num
    for (int i = 0; i < size; i++)
        if (arr[i] / size == 0)
        {
            cout << "Missing:" << i + 1 << endl;
            break;
        }
    // find repeated num
    for (int i = 0; i < size; i++)
        if (arr[i] % size == 2)
        {
            cout << "Repeated:" << i + 1 << endl;
            break;
        }
}

int main()
{
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
    findMissingAndRepeatingNum(arr, arr.size());
    return 0;
}
