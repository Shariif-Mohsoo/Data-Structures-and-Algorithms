#include <iostream>
using namespace std;

int main()
{
    // How to display data?
    cout << "Hello Coder Army" << endl;
    cout << "Welcome to the C++ Basic\n";
    cout << "From Zero" << endl
         << " To " << " Hero" << endl;
    // Variables and DataTypes
    /*
        number: 1,2,3,4,5,etc
        bool:ture or false

        string:"How","Are","You",etc
        char: 'a','b','c','d',etc
        int: 1,2,4,5,etc
        long int:4554545453212,223214343434,etc
        float:1.1,2.1,3.3,5.21,etc
        double: 1.222165,2.33121,3.111232,4.11143,etc
        bool:0,1

        //Variable
        dataType name=value;
        example:
        int x=5;
        float y=4.5;
        double z=5.2226;
        string name="Mohsin"
        char a='A'
     */
    cout << endl;
    int x = 1; // Initialization
    int y = 2;
    cout << "Sum: " << x + y << endl;
    cout << endl;
    char a = 'A';
    cout << "char a=" << a << endl;
    // Variable Declaration
    string person;
    person = "Mohsin"; // variable defined OR assignment.
    cout << endl;
    cout << "Person: " << person << endl;

    int d = 2, b = 2, c = 4;
    cout << endl;
    cout << d << "+" << b << "*" << c << "=" << d + b * c;
    cout
        << endl;
    cout << endl;
    float f = 2.31;
    cout << "Float: " << f << endl;
    cout << endl;
    double dou = 2.55541;
    cout << "Double:" << dou << endl;
    cout << endl;
    cout << endl;
    bool okay = true;
    cout << "Okay: " << okay << endl;
    okay = false; // updating the okay to false
    cout << "Okay: " << okay << endl;
    cout << endl;

    return 0;
}