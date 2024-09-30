/*
    WRITE C++ PROGRAM TO BUILD SIMPLE CALCULATOR USING SWITCH STATEMENT.
*/
#include <iostream>
using namespace std;
int main()
{
label:
    char ch;
    cout << "Enter Airthmatic Operator: ";
    cin >> ch;
    if (ch != '+' && ch != '-' && ch != '/' && ch != '*' && ch != '%')
    {
        cout << "Enter Invalid Input" << endl;
    }
    else
    {
        int num1, num2, res;
        int flag = 1;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        while (flag)
        {
            switch (ch)
            {
            case '+':
            {
                res = num1 + num2;
                break;
            }
            case '-':
            {
                res = num1 - num2;
                break;
            }
            case '*':
            {
                res = num1 * num2;
                break;
            }
            case '/':
            {
                if (num2 == 0)
                    cout << "Exception Error" << endl;
                else
                    res = num1 / num2;
                break;
            }
            case '%':
            {
                if (num2 == 0)
                    cout << "Exception Error" << endl;
                else
                    res = num1 % num2;
                break;
            }
            default:
            {
                cout << "Invalid Input" << endl;
                break;
            }
            }
            cout << "Answer: " << res << endl;
            cout << "To continue press 1 else 0: ";
            cin >> flag;
            if (flag == 1)
                goto label;
        }
    }
    return 0;
}