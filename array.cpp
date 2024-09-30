#include <iostream>
using namespace std;
template <class T1, class T2>
void printArray(T1 arr[], T2 size)
{
    cout << "New Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int array[10] = {1, 2, 3};
    int size = sizeof(array) / sizeof(int);
    printArray(array, size);
    cout << endl;
    char ch[6] = {'M', 'O', 'H', 'S', 'I', 'N'};
    // cout << ch << endl;//TODO: THIS WILL PRINT THE ENTIRE CHARACTER ARRAY.
    printArray(ch, sizeof(ch) / sizeof(char));
    cout << endl;
    // string name = "Mohsin";
    // cout << name.length() << endl;
    return 0;
}