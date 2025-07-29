#include <iostream>
using namespace std;
// Functions declaration.
// pass by value
void intro(void);
int sum(int, int);
int mul(int, int);
bool prime(int);
int factorial(int);

// pass by reference
void Incr(int &);
void swap(int &, int &);

// Main function
int main()
{
    // invoking/calling the function
    intro();

    cout << "Sum of 2 and 3: " << sum(2, 3) << endl;
    cout << "Mul of 2 and 3: " << mul(2, 3) << endl;

    int num;
    cout << "Enter number: ";
    cin >> num;

    string res = prime(num) ? "Yes" : "No";
    cout << "Num is prime: " << res << endl;

    cout << "Factorial of num: " << factorial(num) << endl;

    Incr(num);
    cout << "Incremented value of num: " << num << endl;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "X= " << x << endl;
    cout << "Y= " << y << endl;
    swap(x, y);
    cout << "After swapping" << endl;
    cout << "X= " << x << endl;
    cout << "Y= " << y << endl;

    return 0;
}

// Function definitions.
void intro()
{
    cout << "*******\n\t  Welcome to functions\n\t\t\t\t**********" << endl;
}

int sum(int x, int y)
{
    return (x + y);
}

int mul(int x, int y)
{
    return (x * y);
}

bool prime(int num)
{
    if (num < 1)
        return 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int factorial(int num)
{
    if (num < 0)
        return 0;
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans *= i;
    }
    return ans;
}

void Incr(int &n)
{
    n++;
}

void swap(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}