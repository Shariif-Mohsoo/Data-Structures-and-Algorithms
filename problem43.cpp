/*
    WRITE C++ PROGRAM TO CHECK PERMUTATION OF FIRST STRING
    IS THE SUBSTRING OF THE SECOND STRING.
*/
#include <iostream>
using namespace std;
bool permutationInString(string, string);
bool checkEqual(int[], int[]);
int main()
{
    string str1;
    cout << "Enter first string: ";
    cin >> str1;
    string str2;
    cout << "Enter second string: ";
    cin >> str2;

    if (permutationInString(str1, str2))
    {
        cout << "The permutation of " << str1 << " is the sub string of " << str2 << endl;
    }
    else
    {
        cout << "The permutation of " << str1 << " is not the sub string of " << str2 << endl;
    }
    return 0;
}
bool checkEqual(int count1[], int count2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
            return false;
    }
    return true;
}
bool permutationInString(string s1, string s2)
{
    // first make array for all chars
    int count1[26] = {0};
    int chIdx, i;
    for (i = 0; i < s1.length(); i++)
    {
        chIdx = s1.at(i) - 'a';
        count1[chIdx]++;
    }
    // make the window of same size of s1
    int windowSize = s1.length();
    int count2[26] = {0};
    for (i = 0; i < windowSize && i < s2.length(); i++)
    {
        chIdx = s2[i] - 'a';
        count2[chIdx]++;
    }
    if (checkEqual(count1, count2))
        return true;

    for (; i < s2.length(); i++)
    {
        chIdx = s2.at(i) - 'a';
        count2[chIdx]++;
        char oldChar = s2[i - windowSize];
        chIdx = oldChar - 'a';
        count2[chIdx]--;
        if (checkEqual(count1, count2))
            return true;
    }
    return false;
}