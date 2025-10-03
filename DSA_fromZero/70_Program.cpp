#include <iostream>
using namespace std;

int sizeOfString(string str)
{
    int size = 0;
    while (str[size] != '\0')
        size++;
    return size;
}
void reverseString(string str)
{
    int start = 0, end = sizeOfString(str) - 1;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << "String: " << str << endl;
}
int main()
{
    // reverse the string.
    string str;
    cout << "Enter string:";
    cin >> str;
    cout << str << endl;
    cout << "reverse" << endl;
    reverseString(str);
    return 0;
}