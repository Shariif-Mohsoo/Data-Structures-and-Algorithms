#include <iostream>
using namespace std;

void defangingAnIpAddr(string ipA)
{
    string ans = "";
    int idx = 0;
    while (idx < ipA.size())
    {
        if (ipA[idx] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans += ipA[idx];
        }
        idx++;
    }
    cout << "Defanged IP addr: " << ans << endl;
}

int main()
{
    cout << "Enter IP address: ";
    string ipAddr;
    cin >> ipAddr;
    defangingAnIpAddr(ipAddr);
}