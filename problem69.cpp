//write c++ program to add two numbers represented by Linkedlist
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void getData(list<int>&l)
{
    int choice = 1;
    int data;
    while(choice)
    {
        cout<<"Enter data: ";
        cin>>data;
        l.push_back(data);
        cout<<"To contine press 1 else 0: ";
        cin>>choice;
    }
}
void display(list<int>l)
{
    cout<<"Linkedlist: ";
    for(int ele : l)
        cout<<ele<<" ";
    cout<<endl;
}
void add(list<int> first, list<int> second)
{
    cout<<"Add it"<<endl;
    list<int> result;
    auto it1 = first.begin();
    auto it2 = second.begin();
    int carry = 0;
    // Loop until one of the lists ends
    while (it1 != first.end() || it2 != second.end() || carry!=0) {
        int ele1=0;
        if(it1 != first.end())
            ele1 = *it1;
        int ele2=0;
        if(it2 != second.end())
            ele2 = *it2;
        cout<<"Adding"<<endl;
        // Add elements 
        int sum = carry + ele1 + ele2;
        int val = sum % 10;
        result.push_back(val);
        carry = sum / 10;

        // Move to the next element in both lists
        if(it1 != first.end())
            ++it1;
        if(it2 != second.end())
            ++it2;
    }
    cout<<"Done"<<endl;
    reverse(result.begin(),result.end());
    display(result);
}
int main()
{
    cout<<"Enter data for first Linkedlist"<<endl;
    list<int>list1;
    getData(list1);
    display(list1);
    reverse(list1.begin(),list1.end());
    // display(list1);
    cout<<"Enter data for second Linkedlist"<<endl;
    list<int>list2;
    getData(list2);
    display(list2);
    reverse(list2.begin(),list2.end());
    // display(list2);
    add(list1, list2);
    
    return 0;
}