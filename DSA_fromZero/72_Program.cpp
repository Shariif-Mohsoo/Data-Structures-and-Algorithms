#include <iostream>
using namespace std;

void rotateClockWise(string &s)
{
    char c = s[s.size() - 1];
    int idx = s.size() - 2;
    while (idx >= 0)
    {
        s[idx + 1] = s[idx];
        idx--;
    }
    s[0] = c;
}

void rotateAntiClockWise(string &s)
{
    char c = s[0];
    int idx = 1;
    while (idx < s.size())
    {
        s[idx - 1] = s[idx];
        idx++;
    }
    s[s.size() - 1] = c;
}

bool checkStrings(string st1, string st2)
{
    if (st1.size() != st2.size())
    {
        cout << "Invalid input";
        return false;
    }
    return true;
}

int main()
{
    // check if string is rotated by 2 places.
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (checkStrings(str1, str2))
    {
        string clockWise = str1;
        rotateClockWise(clockWise);
        rotateClockWise(clockWise);
        if (clockWise == str2)
        {
            cout << "Valid" << endl;
            return 1;
        }
        string antiClockwise = str1;
        rotateAntiClockWise(antiClockwise);
        rotateAntiClockWise(antiClockwise);
        if (antiClockwise == str2)
        {
            cout << "Valid" << endl;
            return 1;
        }

        cout << "Invalid" << endl;
    }
    else
    {
        cout << "\tBoth strings should have same length" << endl;
    }

    return 0;
}