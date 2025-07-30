#include <iostream>
using namespace std;

char convert(char ch)
{
  // return ch - 32;
  return ch - 'a' + 'A';
}

int main()
{
  // Convert 'a' to 'A' or 'z' to 'Z'; smallCh to bigChar
  char ch;
  cout << "Enter character b/w (a-z): ";
  cin >> ch;

  cout << "Converted: " << convert(ch) << "\n";

  return 0;
}
