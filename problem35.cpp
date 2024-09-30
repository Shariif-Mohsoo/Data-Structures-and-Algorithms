/*
    TODO:
        WRITE C++ PROGRAM TO ROTATE AN ARRAY.
*/
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>);
void rotate(vector<int>, vector<int> &);
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);
    display(arr);
    vector<int> arrCopy(arr.size());
    rotate(arr, arrCopy);
    display(arrCopy);
    return 0;
}
void display(vector<int> arr)
{
    cout << "Array: ";
    for (int key : arr)
    {
        cout << key << " ";
    }
    cout << endl;
}
void rotate(vector<int> arr, vector<int> &arrCopy)
{
    int amount;
    cout << "Enter the amount to rotate an array: ";
    cin >> amount;
    for (int i = 0; i < arr.size(); i++)
    {
        arrCopy[(i + amount) % arr.size()] = arr[i];
    }
}