#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input(vector<int> &);
void display(vector<int>);
void arraySum(vector<int>, vector<int>, vector<int> &);

int main()
{
    vector<int> arr1;
    cout << "Input data in first array" << endl;
    input(arr1);
    vector<int> arr2;
    cout << "Input data in second array" << endl;
    input(arr2);
    display(arr1);
    display(arr2);
    vector<int> sum;
    arraySum(arr1, arr2, sum);
    display(sum);
    return 0;
}
void input(vector<int> &arr)
{
    int choice = 1;
    int item;
    while (choice)
    {
        cout << "\nEnter input: ";
        cin >> item;
        arr.push_back(item);
        cout << "\nTo stop press 0: ";
        cin >> choice;
    }
    cout << endl;
}
void display(vector<int> arr)
{
    cout << "Array: ";
    for (int item : arr)
    {
        cout << item << " ";
    }
    cout << endl;
}
void arraySum(vector<int> arr1, vector<int> arr2, vector<int> &sumArr)
{
    int i = arr1.size();
    int j = arr2.size();
    int carry = 0, val1, val2, sum;
    while (i >= 0 && j >= 0)
    {
        val1 = arr1[i];
        val2 = arr2[j];
        sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        sumArr.push_back(sum);
        i--;
        j--;
    }
    while (j >= 0)
    {
        val2 = arr2[j];
        sum = val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        sumArr.push_back(sum);
        j--;
    }
    while (i >= 0)
    {
        val1 = arr1[i];
        sum = val1 + carry;
        carry = sum / 10;
        sum = sum % 10;
        sumArr.push_back(sum);
        i--;
    }

    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        sumArr.push_back(sum);
    }
    reverse(sumArr.begin(), sumArr.end());
}