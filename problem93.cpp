/*
    WRITE C++ PROGRAM TO REPLACE SPACES WITH @40 IN STRING.
*/
#include <iostream>
using namespace std;
int main()
{
    string st;
    cout << "Enter string: ";
    // cin.ignore();
    getline(cin, st);
    cout << endl;
    string str = "";
    for (int i = 0; i < st.length(); i++)
    {
        if (st.at(i) == ' ')
        {
            str.push_back('@');
            str.push_back('4');
            str.push_back('0');
        }
        else
        {
            str.push_back(st.at(i));
        }
    }
    cout << "String: " << str << endl;

    return 0;
}
