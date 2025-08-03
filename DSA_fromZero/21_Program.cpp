#include <iostream>
using namespace std;
bool checkNumbers(int &n1, int &n2, int &n3, int &n4)
{
	bool check1 = (n1 == n2 && n3 == n4);
	bool check2 = (n1 == n3 && n2 == n4);
	bool check3 = (n1 == n4 && n2 == n3);
	bool rectangle = (check1 || check2 || check3);
	if (rectangle)
		return true;
	else
		return false;
}
int main()
{
	// check rectangle.
	int n1, n2, n3, n4;
	cout << "Enter four numbers: ";
	cin >> n1 >> n2 >> n3 >> n4;
	cout << "Rectangle: " << checkNumbers(n1, n2, n3, n4) << endl;
	return 0;
}
