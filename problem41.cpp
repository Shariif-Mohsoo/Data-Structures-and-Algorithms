/*
    WRITE C++ PROGRAM TO CHECK WHETHER THE GIVEN PHRASE IS REAL PALINDROME OR NOT
    REMOVE ALL SPECIAL CHARACTERS FROM STRING AND ALSO MAKE SURE CASE SENSITIVITY NOT
    MATTERS.
*/

#include <iostream>
#include <string.h>
using namespace std;
string removeInvalid(string);
string transform(string);
string reverse(string);
int main()
{
    string phrase;
    cout << "Enter the phrase: ";
    cin.ignore();
    getline(cin, phrase);
    cout << "Real: " << phrase << endl;
    string pakString = transform(removeInvalid(phrase));
    if (reverse(pakString) == pakString)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
string removeInvalid(string str)
{
    string realCopy = "";
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            realCopy.push_back(str[i]);
        }
    }
    return realCopy;
}
string transform(string phrase)
{
    string transformed = "";
    char ch;
    for (int i = 0; i < phrase.length(); i++)
    {
        if ((phrase.at(i) >= 'a' && phrase.at(i) <= 'z') || (phrase.at(i) >= '0' && phrase.at(i) <= '9'))
        {
            transformed += phrase.at(i);
        }
        else
        {
            ch = phrase.at(i) + 32;
            transformed += ch;
        }
    }
    return transformed;
}
string reverse(string str)
{
    // we can also apply the reverse array logic which is better approach.
    string rev = "";
    for (int i = (str.length() - 1); i >= 0; i--)
    {
        rev += str[i];
    }
    cout << "Reverse is: " << rev << endl;
    return rev;
}