#include <iostream>
#include "./helper/implementArray.cpp"
#include "./helper/sumArray.cpp"
#include "./helper/findMax.cpp"

using namespace std;

void shipPackagesProblem(int arr[], int size, int m)
{
    int start = findMax(arr, size);
    int end = sumArray(arr, size);
    int ans = 0, mid, packageWeight, count;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        packageWeight = 0;
        count = 1;
        for (int i = 0; i < size; i++)
        {
            packageWeight += arr[i];
            if (packageWeight > mid)
            {
                count++;
                packageWeight = arr[i];
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
    cout << "Minimum capacity for ship: " << ans << endl;
}

int main()
{
    // Ship Packages Problem.....
    int arr[6];
    arrayImplement(arr, 6, 0);

    shipPackagesProblem(arr, 6, 3);
    return 0;
}
