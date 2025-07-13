#include <iostream>
using namespace std;

int main()
{
    /*
        ###### Begin with printing th patterns. ######
        // 1-)
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            cout<<endl;
        // 2
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= n; col++)
            {
                cout << row << " ";
            }
            cout << endl;
        }
            cout<<endl;
        // 3
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= n; col++)
                cout << col << " ";
            cout << endl;
        }
            cout<<endl;
        //4
            for (int row = 1; row <= n; row++)
            {
                for (int col = n; col > 0; col--)
                {
                    cout << col << " ";
                }
                cout << endl;
            }
            cout<<endl;
            // 5
            for (int row = 1; row <= n; row++)
            {
                for (int col = 1; col <= n; col++)
                    cout << col * col << " ";
                cout << endl;
            }
            cout<<endl;
            // 6
            for (int row = 1; row <= n; row++)
            {
                for (int col = 1; col <= n; col++)
                    cout << col * col * col << " ";
                cout << endl;
            }
            cout<<endl;
            // 7
            for (int row = 1; row <= n; row++)
            {
                for (int col = 1; col <= n; col++)
                {
                    cout << char('a' + (row - 1)) << " ";
                }
                cout << endl;
            }
            cout<<endl;
           // 7  2nd way
            for (int row = 1; row <= n; row++)
            {
                for (char col = 'a'; col <= 'e'; col++)
                {
                    cout << col << " ";
                }
                cout << endl;
            }
            cout<<endl;
        // 8
        // int count = 1;
        n = 5;
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= n; col++)
            {
                //(row-1) * 5 + col;
                if (row == (n - (n - 1)) || row == (n - (n - 2)))
                {
                    cout << (row - 1) * 5 + col << "  ";
                    //     cout << count << "  ";
                }
                else
                {
                    //     cout << count << " ";
                    // count++;
                    cout << (row - 1) * 5 + col << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    */

    int n;
    cout << "Enter number(count of rows): ";
    cin >> n;

    return 0;
}