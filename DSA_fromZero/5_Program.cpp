#include <iostream>
using namespace std;
int main()
{
    /*
     ***PRINTING PATTERN MEDIUM LEVEL***
    //1
    *
    **
    ***
    ****
    *****
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
            cout << "*";
        cout << endl;
    }
    cout << endl;

    //2
    1
    12
    123
    1234
    12345

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }
    cout<<endl;

    //3
    1
    22
    333
    4444
    55555

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row;
        }
        cout << endl;
    }

    //4
    1
    21
    321
    4321
    54321
    for (int row = 1; row <= n; row++)
    {
        for (int col = row; col > 0; col--)
        {
            cout << col;
        }
        cout << endl;
    }

    //5
    a
    bb
    ccc
    dddd
    eeeee

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << char('a' + (row - 1));
        }
        cout << endl;
    }

    //6
    *****
    ****
    ***
    **
    *
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n   - (row - 1); col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //7
    12345
    1234
    123
    12
    1

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - (row - 1); col++)
        {
            cout << col;
        }
        cout << endl;
    }
    //8
    5
    54
    543
    5432
    54321
    for (int row = 1; row <= n; row++)
    {
        for (int col = n; col >= n - (row - 1); col--)
            cout << col;
        cout << endl;
    }

    */

    cout << "Enter number(count of rows): ";
    int n;
    cin >> n;

    return 0;
}