#include <iostream>
#include "./helper/implementArray.cpp"
#include "./helper/sumArray.cpp"
#include "./helper/findMax.cpp"

using namespace std;

void kokoEatingBanana(int arr[], int size, int hours)
{
    int start = (sumArray(arr, size) / hours);
    if (!start)
        start = 1;
    int end = findMax(arr, size);
    int mid, total_time, ans;

    while (start <= end)
    {
        /* code */
        mid = start + (end - start) / 2;
        // mid amount of bananas should be comsume in 1 hour
        total_time = 0;
        for (int i = 0; i < size; i++)
        {
            total_time += arr[i] / mid;
            if (arr[i] % mid)
                total_time++;
        }

        if (total_time <= hours)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Minimum bananas koko should eat in one hour: " << ans << endl;
}

int main()
{
    // Problem KoKo Eating Banana
    int array[4];
    arrayImplement(array, 4, 0);
    kokoEatingBanana(array, 4, 8);
    return 0;
}