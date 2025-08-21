#include <iostream>
using namespace std;

void getInputFromUser(int arr[], int size)
{
    cout << "\nEnter Data In An Array\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element: ";
        cin >> arr[i];
    }
    return;
}