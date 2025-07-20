#include <iostream>
using namespace std;
int main()
{
    // * White Loop
    /* code
    int n = 10;
    while (n)
    {
        cout << n-- << endl;
    }
    // Print table of num entered by user
    cout << "Enter number: ";
    cin >> n;
    int i = 1;
    while (i <= 10)
        cout << n << " * " << i << " = " << (n * i++) << endl;
    // Print the factor of number entered by user
    i = 1;
    while (i <= n)
        if (n % i == 0)
            cout << i++ << " is factor" << endl;
        else
            i++;

    // Print even and odd numbers between 1 to n using while loop
    i = 1;
    while (i <= n)
        if (i % 2 == 0)
            cout << i++ << " is even number" << endl;
        else
            cout << i++ << " is odd number" << endl;
    */

    //    Do While Loop
    /* code
    int m;
    m = 10;
    do
        cout << m-- << endl;
    while (m);

    cout << endl;
    int j = 1;
    do
    {
        j++;
        cout << j << " ";
    } while (j <= 5);

    // sum of n numbers
    int sum = 0;
    j = 1;
    cout << "Enter number: ";
    cin >> m;
    do
        sum += j++;
    while (j <= m);
    cout << "Sum is: " << sum << endl;
    */

    //    Break & Continue
    /*
        code

    int k;
    k = 1;
    while (k <= 10)
        if (k == 7)
            break;
        else
            cout << k++ << " ";
    cout << endl;

    k = 1;
    while (k <= 10)
        if (k % 4 == 0)
        {
            k++;
            continue;
        }
        else
            cout << k++ << " ";
    cout << endl;
    */

    // Switch Statement
    /* code
    int num;
    cout << "Enter number b/w 0 and 5: ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Ali" << endl;
        break;
    case 2:
        cout << "Imran" << endl;
        break;
    case 3:
        cout << "Ahsan" << endl;
        break;
    case 4:
        cout << "Hamid" << endl;
        break;
    default:
        cout << "Out of range; must be b/w 0 and 5" << endl;
        break;
    }

    // Check character is vowel or not
    char ch;
    cout << "Enter character: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is vowel" << endl;
        break;
    default:
        cout << ch << " is Consonant" << endl;
        break;
    }
    */

    return 0;
}