#include<iostream>
using namespace std;
//declaraing the function prototypes
void getInput(int*,int);
void display(int *,int);
void sortArray(int*,int);
int main()
{
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;
    int *arr = new int[size];
    getInput(arr,size);
    display(arr,size);
    sortArray(arr,size);
    display(arr,size);
    delete [] arr;
    return 0;
}
void getInput(int *arr,int size)
{
    cout<<"Enter the data in an array"<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<"Enter input: ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<endl;
}

void display(int *arr,int size)
{
    cout<<"Array: ";
    for(int i = 0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void sortArray(int *arr,int size)
{
    if(size == 0 || size == 1) return;
    for(int i = 0;i<size - 1;i++)
    {
        if(arr[i] > arr[i+ 1])
            swap(arr[i],arr[i + 1]);
    }
    sortArray(arr,size - 1);
}