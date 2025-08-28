#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // vector<dataType>v(sizeOfVector,initialize)
    // vector<int> v(4, 2);
    // vector<int>v = {2, 4, 6, 8, 10}

    /**
        vector<int>v(5)
        for(int i=0;i<5;i++)
        cin>>v[i]
        //OR
        int n;
        cin>>n;
        vector<int>v2(n)
     */

    vector<int> a;
    a.push_back(2);  // 2
    a.push_back(4);  // 2, 4
    a.push_back(6);  // 2, 4, 6
    a.push_back(8);  // 2, 4, 6, 8
    a.push_back(10); // 2, 4, 6, 8, 10
    a.push_back(1);
    a.push_back(2);
    // remove element
    // a.pop_back();           // to remove last value
    // a.erase(a.begin() + 2); // to erase specific index value
    // a.clear();              // to clear/remove all elements.

    cout
        << a.at(1) << endl;

    // Iterator in vector
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    //
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;

    // copy value of one vector to another
    vector<int> v;
    v = a;
    cout << "Size of v:" << v.size() << endl;

    //
    for (auto i : a)
        cout << i << " ";
    // sort in increasing order
    sort(a.begin(), a.end());

    // sort in decreasing order
    sort(a.begin(), a.end(), greater<int>());

    for (auto i : a)
        cout
            << i << endl;

    // search in vector
    cout << binary_search(a.begin(), a.end(), 9) << endl;

    // find index of
    cout << (find(a.begin(), a.end(), 2) - a.begin()) << endl;
    return 0;
}