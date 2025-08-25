#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void aggreesiveCows(int arr[], int size, int cows)
{
    int start = 1;
    int end = arr[size - 1] - arr[0];
    int mid, count, pos, ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        count = 1;
        pos = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (pos + mid <= arr[i])
            {
                count++;
                pos = arr[i];
            }
        }
        if (count < cows)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    cout << "The (min)max distance b/w each cow is: " << ans << endl;
}

int main()
{
    // Problem Aggressive Cows
    // int stalls[5] = {10, 1, 2, 7, 5};
    int stalls[5];
    arrayImplement(stalls, 5, 1);
    aggreesiveCows(stalls, 5, 3);
    return 0;
}