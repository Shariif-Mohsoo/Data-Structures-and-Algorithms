#include <iostream>
using namespace std;
int main()
{
    /*
        Top 5 Advance Pattern Print Problems.
        1-)
            for (int row = 1; row <= n; row++)
            {
                for (int spc = 1; spc <= n - row; spc++)
                    cout << "  ";

                for (int col = 1; col <= (row * 2) - 1; col++)
                    cout << "* ";
                cout << endl;
            }

            2-)
                for (int row = 1; row <= n; row++)
                {
                //space print
                    for (int spc = 1; spc <= (n - row); spc++)
                        cout << "  ";
                // 1 to row
                    for (int col = 1; col <= row; col++)
                        cout << col << " ";
                // (row-1) to 1
                    for (int col = (row - 1); col > 0; col--)
                        cout << col << " ";
                    cout << endl;
                }

        3-)
        for (int row = n; row > 0; row--)
        {
        //Linear approach to print space
            // for (int spc = (n - row); spc > 0; spc--)
            //     cout << "  ";
                //OR
            // for (int spc = 1;spc <= (n - row); spc++)
            //     cout << "  ";

        //Complex approach to print space
            int count = (2 * row) - 1;
            for (int spc = 1; spc <= (((2 * n - 1) - count) / 2); spc++)
                cout << "  ";
        //Print start(*)
            for (int col = 1; col <= count; col++)
                cout << "* ";
            cout << endl;
        }

    4-)
        for (int row = n; row > 0; row--)
    {
        // Print *
        for (int col = 1; col <= row; col++)
            cout << "*";
        // Print spc
        for (int spc = 1; spc <= (2 * n - 2 * row); spc++)
            cout << " ";
        // Print *
        for (int col = 1; col <= row; col++)
            cout << "*";

        cout << endl;
    }

    for (int row = 1; row <= n; row++)
    {
        // Print *
        for (int col = 1; col <= row; col++)
            cout << "*";
        // Print spc
        for (int spc = 1; spc <= (2 * n - 2 * row); spc++)
            cout << " ";
        // Print *
        for (int col = 1; col <= row; col++)
            cout << "*";

        cout << endl;
    }
    cout<<endl;

    5-)
     for (int row = 1; row <= n; row++)
    {
        // print *
        for (int col = 1; col <= row; col++)
            cout << "*";
        // print spc
        for (int spc = 1; spc <= (2 * n - 2 * row); spc++)
            cout << " ";
        // print *
        for (int col = 1; col <= row; col++)
            cout << "*";
        cout << endl;
    }

    for (int row = (n - 1); row > 0; row--)
    {
        // print *
        for (int col = 1; col <= row; col++)
            cout << "*";
        // print spc
        for (int spc = 1; spc <= (2 * n - 2 * row); spc++)
            cout << " ";
        // print *
        for (int col = 1; col <= row; col++)
            cout << "*";
        cout << endl;
    }

    6-)
        for (int row = 1; row <= n; row++)
    {
        // print space
        for (int spc = 1; spc <= (n - row); spc++)
            cout << " ";
        // print *
        for (int col = 1; col <= row; col++)
            cout << "* ";
        cout << endl;
    }

    for (int row = n; row > 0; row--)
    {
        // print space
        for (int spc = 1; spc <= (n - row); spc++)
            cout << " ";
        // print *
        for (int col = 1; col <= row; col++)
            cout << "* ";
        cout << endl;
    }
*/

    cout << "Enter number (count of rows): ";
    int n;
    cin >> n;

    return 0;
}