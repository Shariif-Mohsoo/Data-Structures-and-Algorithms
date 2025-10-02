#include <iostream>
using namespace std;
int main()
{
    char ch1 = 'A';
    char ch2 = 'P';
    char ch3 = 'P';
    char ch4 = 'L';
    char ch5 = 'E';
    cout << endl
         << ch1 << ch2 << ch3 << ch4 << ch5 << endl;

    char ch[] = {'A', 'P', 'P'};
    cout << ch << endl;
    for (int i = 0; i < sizeof(ch); i++)
        cout << ch[i];
    cout << endl;

    // string s;
    // cin >> s;
    // cout << s << endl;
    // cout << sizeof(s) << endl;
    string s;
    cout << "Enter any question:" << endl;
    getline(cin, s);
    cout << s << endl;
    cout << s.size() << endl;
    s.push_back('?');
    cout
        << s << endl;
    string s1 = "M", s2 = "Mohsin";
    cout << endl;
    cout << s1 + "." + s2 << endl;
    return 0;
}