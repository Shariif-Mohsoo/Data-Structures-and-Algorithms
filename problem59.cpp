//PROGRAM TO APPLY THE MERGE SORT ON AN ARRAY.
#include<iostream>
using namespace std;
void getInput(int *,int);
void display(int *,int);
void mergeSort(int*,int,int);
void merge(int*,int,int);
int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int *arr = new int[size];
    getInput(arr,size);
    display(arr,size);
    mergeSort(arr,0,size - 1);
    display(arr,size);
    delete [] arr;
    return 0;
}
void getInput(int *arr,int size)
{
    cout<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<"Enter the input: ";
        cin>>arr[i];
    }cout<<endl;
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
void mergeSort(int *arr,int lb,int ub)
{
    if(lb >= ub)
    return;
    int mid = lb + (ub - lb) / 2;
    mergeSort(arr,lb,mid);
    mergeSort(arr,mid + 1,ub);
    merge(arr,lb,ub);
}
void merge(int *arr,int lb,int ub)
{
    int mid = lb + (ub - lb)/2;
    int len1 = mid - lb + 1;
    int len2 = ub - mid;
    //creating the new arrays
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    //main array index
    int k = lb;
    for(int i = 0;i<len1;i++)
        arr1[i] = arr[k++];
    for(int i = 0;i<len2;i++)
        arr2[i] = arr[k++];
    //merge the arrays
    k = lb;
    int idx1 = 0;
    int idx2 = 0;
    while(idx1 < len1 && idx2 < len2)
    {
        if(arr1[idx1] < arr2[idx2])
            arr[k++] = arr1[idx1++];
        else
            arr[k++] = arr2[idx2++];
    }
    while(idx1 < len1)
        arr[k++] = arr1[idx1++];
    while(idx2 < len2)
        arr1[k++] = arr2[idx2++];

    delete [] arr1;
    delete [] arr2;
}