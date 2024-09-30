/*
    WRITE C++ PROGRAM TO COMPRESS THE GIVEN STRING
    IF STRING IS AAMOHSAA
    ANSWER WILL BE A4MOHS
*/
#include <iostream>
#include <vector>
using namespace std;
void compress(char[]);
int getLength(char[]);
int main()
{
    char ch[30];
    cout << "Enter the string: ";
    cin >> ch;
    cout << "Original: " << ch << endl;
    compress(ch);
    return 0;
}
int getLength(char ch[])
{
    int length = 0;
    for (int i = 0; i < ch[i] != '\0'; i++)
        length++;
    return length;
}
void compress(char ch[])
{
    int j, count;
    int ansIdx = 0; // to identify new size of char array
    int length = getLength(ch);
    for (int i = 0; i < length; i = j)
    {
        j = i + 1;
        while (j < length && ch[i] == ch[j])
        {
            j++;
        }
        ch[ansIdx++] = ch[i];
        count = j - i;
        if (count > 1)
        {
            string str = to_string(count);
            for (char c : str)
                ch[ansIdx++] = c;
        }
    }
    ch[j] = '\0';
    cout << "Compressed: " << ch << endl;
}