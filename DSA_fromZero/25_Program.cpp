#include <iostream>
using namespace std;
void checkElement(int arr[], int size, int num)
{
  for (int i = 0; i < size; i++)
    if (arr[i] == num)
    {
      cout << "Present at idx: " << i << endl;
      return;
    }
  cout << "Present at idx: " << -1 << endl;
}

void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void reverse(int arr[], int size)
{
  int temp;
  int j = size - 1;
  for (int i = 0; i < (size / 2); i++)
  {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    j--;
  }
}

int findMax(int arr[], int size)
{
  int ans = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > ans)
      ans = arr[i];
  }
  return ans;
}

void find2ndMax(int arr[], int size)
{
  int max = findMax(arr, size);
  int ans = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (max != arr[i])
    {
      if (arr[i] > ans)
        ans = arr[i];
    }
  }
  cout << "2nd Max: " << ans << endl;
}

void findMissingNumber()
{
  int range;
  cout << "Enter the range: ";
  cin >> range;
  // sum of range
  int sum = 0;

  // 1st way to sum n numbers
  //  for (int i = 1; i <= range; i++)
  //  {
  //    sum += i;
  //  }

  // Best way to sum n numbers;
  sum = range * (range + 1) / 2;

  // find the sum of an array;
  int arr[range - 1];
  for (int i = 0; i < (range - 1); i++)
  {
    cout << "Enter number between (1 and " << range << " ): ";
    cin >> arr[i];
  }

  // find the sum of an array:
  int arrSum = 0;
  for (int i = 0; i < (range - 1); i++)
  {
    arrSum += arr[i];
  }
  // find the missing element
  cout << "The missing number in an array: " << (sum - arrSum) << endl;
}

void fibonaciSeries()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int arr[50];
  // first 0 and second 1 (fixed)
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i < n; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  cout << "Fibo: " << arr[n - 1] << endl;
}

void rotateArrayBy1(int arr[], int size)
{
  int tmp = arr[size - 1];
  for (int i = (size - 1); i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = tmp;
}

int main()
{
  int arr[6] = {6, 11, 7, 4, 8, 9};
  /*
  int num;
  cout << "Enter number to search: ";
  cin >> num;

  // 1-) Search an element in an array.
  checkElement(arr, 6, num);
  */
  /*
    2-) Reverse an array.
  display(arr, 6);
  reverse(arr, 6);
  display(arr, 6);
  */
  /*
   3-) Find 2nd Max
   find2ndMax(arr, 6);
  */

  /*
    4-) Mission Number
      findMissingNumber();
  */

  /*
   5-)
  fibonaciSeries();
  */

  /*
   6-)
  display(arr, 6);
  rotateArrayBy1(arr, 6);
  display(arr, 6);
  */

  return 0;
}
