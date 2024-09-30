/*
    WRITE C++ PROGRAM TO RETURN THE CHARACTER THAT OCCUR
    MAXIMUM TIMERS IN THE STRING
*/
#include <iostream>
using namespace std;
char returnMaxiOccChar(string);
int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "Character occur maximum times is : " << returnMaxiOccChar(str);
    cout << endl;
    return 0;
}
char returnMaxiOccChar(string str)
{
    // count array for characters occurrences
    int charsCount[26] = {0};
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) >= 'a' && str.at(i) <= 'z')
        {
            index = str.at(i) - 'a';
        }
        else
        {
            index = str.at(i) - 'A';
        }
        charsCount[index]++;
    }
    // finding the index of maximum occurrence
    int maxi = -1, ansIdx;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < charsCount[i])
        {
            ansIdx = i;
            maxi = charsCount[i];
        }
    }
    char finalAnswer = 'a' + ansIdx;
    return finalAnswer;
}