#include <iostream>
#include "./helper/implementArray.cpp"

using namespace std;

void trappingRainWater(int arr[], int size)
{
    int leftmax = 0, rightmax = 0, water = 0, maxheight = arr[0], index = 0;
    // max height in an array
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (maxheight < arr[i])
        {
            maxheight = arr[i];
            index = i;
        }
    }

    // Left Part..
    for (int i = 0; i < index; i++)
    {
        if (leftmax > arr[i])
            water += leftmax - arr[i];
        else
            leftmax = arr[i];
    }

    // Right Part..
    for (int i = size - 1; i > index; i--)
    {
        if (rightmax > arr[i])
            water += rightmax - arr[i];
        else
            rightmax = arr[i];
    }
    cout << "The maximum unit of water that can be stored = " << water << endl;
}

int main()
{
    // maxDifferenceBetweenTwoElements
    int arr[8];
    arrayImplement(arr, 8, 0);
    trappingRainWater(arr, 8);
    return 0;
}