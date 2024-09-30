/*
    PROGRAM TO REVERSE AN ARRAY.
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void display(vector<int> &);
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
    reverse(v.begin(), v.end());
    display(v);
    return 0;
}
void display(vector<int> &v)
{
    cout << "\nArray: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}