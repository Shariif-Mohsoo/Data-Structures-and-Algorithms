#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
	int idx;
	for (int i = 0; i < (size - 1); i++)
	{
		idx = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[idx])
				idx = j;
		}
		swap(arr[i], arr[idx]);
	}
}

void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[6] = {10, 1, 5, 3, 2, 4};
	display(arr, 6);
	selectionSort(arr, 6);
	display(arr, 6);

	int ar[4] = {1, 0, 3, -1};
	display(ar, 4);
	selectionSort(ar, 4);
	display(ar, 4);

	return 0;
}
