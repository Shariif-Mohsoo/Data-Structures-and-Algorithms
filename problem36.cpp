/*
    CHECK WHETHER THE ARRAY IS SORTED AND ROTATED OR NOT.
*/
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>);
void input(vector<int> &);
bool checkArray(vector<int>);
int main()
{
    vector<int> arr;
    input(arr);
    display(arr);
    cout << "Is Array sorted and rotated 1/TRUE OR 0/FALSE: " << checkArray(arr) << endl;
    return 0;
}
void input(vector<int> &arr)
{
    int item;
    int choice = 1;
    while (choice)
    {
        cout << "Enter Input:";
        cin >> item;
        arr.push_back(item);
        cout << "To exit press 0: ";
        cin >> choice;
    }
    return;
}
void display(vector<int> arr)
{
    cout << "Array: ";
    for (int item : arr)
    {
        cout << item << " ";
    }
    return;
}
bool checkArray(vector<int> arr)
{
    int count = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
            count++;
        if (arr[arr.size() - 1] > arr[0])
            count++;
    }
    return (count <= 1);
}