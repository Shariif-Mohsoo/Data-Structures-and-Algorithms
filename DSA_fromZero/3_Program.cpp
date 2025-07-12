#include <iostream>
using namespace std;
int main()
{
	int i;
	/*
	1-)
		for(i=20;i<=200;i++) cout<<i<<endl;
	2-) PRINT CHARACTER's FROM  {a to z}.
	for (char ch = 'a'; ch <= 'z'; ch++)
		cout << ch << " ";
	cout << endl;
	3-) PRINT N TO 1
	cout<<"Enter value of n: ";
	int n;cin>>n;
	for ( ; n > 0; n--)
		cout << n << " ";
	cout << endl;
	4-)Print 1 to 100 (but in 1 4 7 10 13 ...... 100)
	for (i = 1; i <= 100; i += 3)
		cout << i << " ";
	cout << endl;
	5-)Print table of n (Enter by user)
	int num;
	cout << "Enter Value: ";
	cin >> num;
	for (i = 1; i <= 10; i++)
	{
		cout << num << " * " << i << " = " << (num * i) << endl;
	}
	// 2nd way to print table
	for (int i = n; i <= (n * 10); i += n)
		cout << i << endl;
	6-) Find power of given number
	cout << "Enter number and power: ";
	int num1, pow1;
	cin >> num1 >> pow1;
	int res = 1;
	for (i = 1; i <= pow1; i++)
		res *= num1;
	cout << num1 << "^" << pow1 << "=" << res << endl;
	7-)Sum of n natural numbers
	cout << "Enter number: ";
	int sum = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
		sum += i;
	cout << "Sum: " << sum << endl;
	//2nd way
	cout<<(n*(n+1))/2<<endl;
	8-)Factorial of n
	int  fact = 1;
	for (int i = n; i > 0; i--)
		fact *= i;
	cout << "The factorial of " << n << " is: " << fact << endl;
	9-) Check Whether the number is prime or not.
	int n;
	cout << "Enter number: ";
	cin >> n;
	bool flag = 1;
	for (int i = 2; i < n; i++)
	{
		if (n == 2)
			break;
		if (n % i == 0)
			flag = 0;
	}
	if (flag && n > 0)
		cout << "Num " << n << " is prime number";
	else
		cout << "Num " << n << " is not prime number";
	cout << endl;
	10-) Program to print fibo series.
	*/

	return 0;
}
