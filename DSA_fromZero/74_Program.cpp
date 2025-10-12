#include <iostream>
#include <vector>
using namespace std;

void sortString(string &str)
{
    vector<int> alpha(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        alpha[str[i] - 'a']++;
    }
    string ans = "";
    for (int i = 0; i < alpha.size(); i++)
    {
        while (alpha[i])
        {
            /* code */
            ans += ('a' + i);
            alpha[i]--;
        }
    }
    cout << "Sorted: " << ans << endl;
}

int main()
{
    // sort a string.
    string str = "edcab";
    cout << "String: " << str << endl;
    sortString(str);
    str = "eedccaab";
    cout << "String: " << str << endl;
    sortString(str);
    return 0;
}