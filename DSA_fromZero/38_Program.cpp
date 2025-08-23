#include <iostream>
#include "./helper/implementArray.cpp"
#include "./helper/sumArray.cpp"
#include "./helper/findMax.cpp"

using namespace std;

void painterPartitionProblem(int arr[], int size, int m)
{
    int start = findMax(arr, size);
    int end = sumArray(arr, size);
    int ans = 0, mid, wallsLength, count;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        wallsLength = 0;
        count = 1;
        for (int i = 0; i < size; i++)
        {
            wallsLength += arr[i];
            if (wallsLength > mid)
            {
                count++;
                wallsLength = arr[i];
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
    cout << "Minimum time required to paint walls: " << ans << endl;
}

int main()
{
    // Painter Partition Problem.....
    int arr[5];
    arrayImplement(arr, 5, 0);
    painterPartitionProblem(arr, 5, 3);
    return 0;
}
