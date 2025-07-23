#include <iostream>
using namespace std;
int main()
{
    /*
        Leap Year.
        (A year in which Feburary month has 29 days.)
        1-) Divided by 400. (pure leep year)
        2-) Divided by 4 and not by 100 (leap year)
        3-) Except(remaining) is not leep year.
    */
    cout << "Enter year(To Check It Is Leap Year Or Not): ";
    int year;
    cin >> year;
    if (year % 400 == 0)
        cout << "Leep Year" << endl;
    else if (year % 4 == 0 && year % 100 != 0)
        cout << "Leap Year" << endl;
    else
        cout << "Not Leap Year" << endl;
    return 0;
}