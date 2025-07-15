#include <iostream>
using namespace std;

int main()
{
    // Solve hard pattern print problems.
    /*
    // 1-)
    for (int row = 1; row <= n; row++)
    {
        for (int spc = 1; spc <= (n - row); spc++)
            cout << " ";
        for (int col = 1; col <= row; col++)
            cout << "*";

        cout << endl;
    }
    cout<<endl;
    //2-)
    for (int row = 1; row <= n; row++)
    {
        for (int spc = 1; spc <= n - row; spc++)
            cout << " ";
        for (int col = 1; col <= row; col++)
            cout << row;
        cout << endl;
    }
    cout<<endl;
    //3-)
    for (int row = 1; row <= n; row++)
    {
        for (int spc = 1; spc <= n - row; spc++)
            cout << " ";
        for (int col = 1; col <= row; col++)
            cout << col;
        cout << endl;
    }
    cout<<endl;
    //4-)
        for (int row = 1; row <= n; row++)
        {
            for (int spc = 1; spc <= n - row; spc++)
                cout << " ";
            for (int col = 1; col <= row; col++)
                cout << char('A' + (col - 1));
            cout << endl;
        }
    //5-)
    for (int row = 1; row <= n; row++)
    {
        for (int spc = 1; spc <= n - row; spc++)
            cout << " ";
        for (int col = row; col > 0; col--)
            cout << col;
        cout << endl;
    }
     */
    int n;
    cout << "Enter number(row size:) ";
    cin >> n;

    return 0;
}