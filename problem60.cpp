//program to apply the quick sort on an array;
#include<iostream>
using namespace std;
void getInput(int*,int);
void display(int*,int);
int partition(int*,int,int);
void quickSort(int*,int,int);
void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;	
}
int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int *arr = new int[size];
    getInput(arr,size);
    display(arr,size);
    quickSort(arr,0,size - 1);
    display(arr,size);
    delete [] arr;
    return 0;
}
void getInput(int *arr,int size)
{
    cout<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<"Enter input: ";
        cin>>arr[i];
    }
    cout<<endl;
}
void display(int *arr,int size)
{
    cout<<"Array: ";
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition(int *arr,int lb,int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end)
    {
        while(arr[start] <= pivot)
            start++;
        while(arr[end] > pivot)
            end--;
        if(start < end)
        swap(arr[start],arr[end]);
    }
    swap(arr[lb],arr[end]);
    return end;
}
void quickSort(int *arr,int lb,int ub)
{
    if(lb>=ub) return;
    int loc = partition(arr,lb,ub);
    quickSort(arr,lb,loc - 1);
    quickSort(arr,loc + 1, ub);
}
