/*
    WRITE C++ PROGRAM TO FIND THE LENGTH OF THE STRING.
*/
#include <iostream>
#include <string.h>
using namespace std;
int getLength(char[]);
int main()
{
    char str[40];
    cout << "Enter the string: ";
    cin >> str;
    cout << "Length:" << getLength(str);
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