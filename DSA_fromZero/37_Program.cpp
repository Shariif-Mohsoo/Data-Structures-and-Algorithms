#include <iostream>
#include "./helper/implementArray.cpp"
#include "./helper/sumArray.cpp"
#include "./helper/findMax.cpp"

using namespace std;

void bookAllocationProblem(int arr[], int size, int m)
{
    int start = findMax(arr, size);
    int end = sumArray(arr, size);
    int ans = 0, mid;
    int pages, count;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        pages = 0;
        count = 1;
        for (int i = 0; i < size; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {
                count++;
                pages = arr[i];
            }
        }
        if (count <= m)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Maximun number of pages that can be distributed to one student is: " << ans << endl;
}

int main()
{
    // Book Allocation Problem.....
    int arr[6];
    arrayImplement(arr, 6, 0);
    bookAllocationProblem(arr, 6, 3);
    return 0;
}
