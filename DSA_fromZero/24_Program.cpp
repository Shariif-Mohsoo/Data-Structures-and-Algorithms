#include <iostream>
using namespace std;

void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void findMin(int arr[], int size)
{
  int ans = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < ans)
      ans = arr[i];
  }
  cout << "Min: " << ans << endl;
}

void findMax(int arr[], int size)
{
  int ans = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > ans)
      ans = arr[i];
  }
  cout << "Max: " << ans << endl;
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  display(arr, 5);
  // cout << arr[0];
  cout << "\nEnter Data(Integers)\n";
  for (int i = 0; i < 5; i++)
    cin >> arr[i];
  display(arr, 5);
  int length;
  length = (sizeof(arr) / sizeof(arr[0]));
  cout << "Length of an array: " << length << endl;

  findMin(arr, 5);
  findMax(arr, 5);
  // displaying the input
  return 0;
}
