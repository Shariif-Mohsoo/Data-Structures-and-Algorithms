#include <iostream>
#include <vector>
using namespace std;

void findOccuranceOfNum(vector<int> arr, int size)
{
    // cout << size << endl;
    // decrease each element by 1
    for (int i = 0; i < size; i++)
        arr[i]--;
    // increase ans element by size
    for (int i = 0; i < size; i++)
        arr[arr[i] % size] += size;
    // find occurance of num
    for (int i = 0; i < size; i++)
    {
        int occ = arr[i] / size;
        cout << "Occurance of " << i + 1 << " : " << occ << endl;
    }
}

int main()
{
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
    findOccuranceOfNum(arr, arr.size());
    return 0;
}
