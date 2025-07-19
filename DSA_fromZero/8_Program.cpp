#include <iostream>
using namespace std;

int main()
{
    cout << "Unary Operators" << endl;
    int a = 10;
    cout << "a=" << a << endl;
    cout << "Post Increment a++=" << a++ << endl;
    cout << "Pre Increment ++a=" << ++a << endl;
    cout << "Pre Decrement --a=" << --a << endl;
    cout << "Post Decrement a--=" << a-- << endl;
    cout << "a=" << a << endl;

    cout << endl
         << "Comparison Operators" << endl;
    int b = 20;
    cout << "b=" << b << endl;
    cout << "1 means true else false" << endl;
    cout << "a==b = " << (a == b) << endl;
    cout << "a>b = " << (a > b) << endl;
    cout << "a<b = " << (a < b) << endl;
    cout << "a>=b = " << (a >= b) << endl;
    cout << "a<=b = " << (a <= b) << endl;
    cout << "a!=b = " << (a != b) << endl;
    cout << "a>b<5 = " << (a > b < 5) << endl;

    int c = 20;

    if (a > b && a > c)
        cout << "yes";
    else
        cout << "No";
    cout << endl;

    char ch = 'a';
    bool isVowel = (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');
    if (isVowel)
        cout << ch << " is vowel" << endl;
    else
        cout << ch << " is consonant" << endl;

    cout << "!23:" << !23 << endl;
    cout << "!00:" << !00 << endl;

    cout << "\nBitwise Operator\n"
         << endl;
    cout << "AND 2&3:" << (2 & 3) << endl;
    cout << "OR 2|3:" << (2 | 3) << endl;
    cout << "XOR 2^3:" << (2 ^ 3) << endl;
    cout << "COMPLIMENT ~8:" << (~8) << endl;
    cout << "Left Shift 8<<1:" << (8 << 1) << endl;
    cout << "Right Shift 8>>1:" << (8 >> 1) << endl;
    return 0;
}