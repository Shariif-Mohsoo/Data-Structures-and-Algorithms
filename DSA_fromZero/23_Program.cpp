#include <iostream>
using namespace std;
bool canWinNim(int n)
{
    if (n % 4 == 0)
        return 0;
    else
        return 1;
}
int main()
{
    // NIM Game (Game always start from player 1(Me)"
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "Player_1 (I win):" << canWinNim(n) << endl;

    return 0;
}
