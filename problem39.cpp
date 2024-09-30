/*
    WRITE C++ PROGRAM TO REVERSE THE STRING.
*/
#include <iostream>
#include <string.h>
using namespace std;
int getLength(char[]);
void reverse(char[]);
int main()
{
    char str[40];
    cout << "Enter the string: ";
    cin >> str;
    reverse(str);
    return 0;
}
int getLength(char chr[])
{
    int length = 0;
    for (int i = 0; chr[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
void reverse(char str[])
{
    // we can also apply the reverse array logic which is better approach.
    string rev = "";
    for (int i = (getLength(str) - 1); i >= 0; i--)
    {
        rev += str[i];
    }
    cout << "Reverse is: " << rev << endl;
}