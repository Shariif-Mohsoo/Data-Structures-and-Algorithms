//Find the next smaller element in an array.
#include<iostream>
#include<stack>
using namespace std;
void getInput(int *arr,int size)
{
    cout<<"Enter input in an array"<<endl;
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

void nextSmallerElement(int *arr,int size)
{
    stack<int>s;
    s.push(-1);
    int *ans = new int[size];
    for(int i = size - 1;i >= 0;i--)
    {
        int curr = arr[i];
        while(s.top() >= curr)
            s.pop();
        ans[i] = s.top();
        s.push(curr);
    }
    cout<<"Ans: ";
    display(ans,size);
}

int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int *arr = new int[size];
    getInput(arr,size);
    display(arr,size);
    nextSmallerElement(arr,size);
    return 0;
}