#include <iostream>
using namespace std;
int main()
{
    // USER INPUT
    /*
    int x, y;
    cout << "Enter value of x and y: ";
    cin >> x >> y;
    cout << "The sum of x and y: " << x + y << endl;
    cout << "Again enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    cout << "x*y: " << x * y << endl;
    */

    // Type casting
    /*
    int a = 20;
    char b = 'a';
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "TypeCasting" << endl;
    // typecasting(IMPLICIT)
    a = b;
    cout << "Value of a: " << a << endl;
    // typecasting(EXPLICIT)
    b = (char)a;
    cout << "Value of b: " << b << endl;
    */

    // Decision making
    /*
    //1-)
     cout << "Enter the package: ";
     int package;
     cin >> package;
     if (package > 10)
     {
         cout << "Accepted" << endl;
     }
     else
     {
         cout << "Rejected" << endl;
     }
     //2-) Check whether the character is vowel or consonat
        char c = 'a';
        if (c == 'a')
            cout << "Vowel" << endl;
        else if (c == 'e')
            cout << "Vowel" << endl;
        else if (c == 'i')
            cout << "Vowel" << endl;
        else if (c == 'o')
            cout << "Vowel" << endl;
        else if (c == 'u')
            cout << "Vowel" << endl;
        else
            cout << "Consonat" << endl;
    3-)
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num == 1)
        cout << "Monday";
    else if (num == 2)
        cout << "Tuesday";
    else if (num == 3)
        cout << "Wensday";
    else if (num == 4)
        cout << "Thursday";
    else if (num == 5)
        cout << "Friday";
    else if (num == 6)
        cout << "Saturday";
    else if (num == 7)
        cout << "Sunday";
    else
        cout << "Invalid Input(1-7 should be the input)";
    cout << endl;

    */

    // LOOP'S
    /*
    for (int count = 1; count <= 5; count = count + 1)
    {
        cout << count << " =:= ";
        cout << "CA" << endl;
    }

    // DANGEROUS LOOP
    for (;;)
    {
        cout << "Hi";
    }

    // 3-)
    {
        int i = 1;
        for (; i <= 10;)
        {
            cout << i << endl;
            i = i + 1;
        }
    }
    // 4-) From the range check whether the number is even or odd
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            cout << "Even Number: " << i << endl;
        else
            cout << "Odd Number: " << i << endl;
    }
    // 5-)Print the square of numbers from 10 to 20
    for (int i = 10; i <= 20; i++)
        cout << "Square of " << i << " is: " << (i * i) << endl;
    // 6-) Print even numbers between 1 and 20
    for (int i = 2; i <= 20; i += 2)
        cout << "Even Number: " << i << endl;

    // 7-) Print odd numbers between 1 and 20
    for (int i = 1; i <= 20; i += 2)
        cout << "Even Number: " << i << endl;
    */

    return 0;
}