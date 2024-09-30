//write c++ program to merge two sorted linked lists.
#include<iostream>
#include<list>
//#include<algorithm>
using namespace std;
void getData(list<int>&l)
{
	int choice = 1;
	int data;
	while(choice)
	{
		cout<<"Enter input: ";
		cin>>data;
		l.push_back(data);
		cout<<"To continue press 1 else 0: ";
		cin>>choice;
	}
	cout<<endl;
}
void display(list<int>l)
{
	cout<<"Linked list: ";
//	auto it1 = first.begin();
	list<int>::iterator itr = l.begin();
	while(itr!=l.end())
	{
		cout<<*itr<<" ";
		itr++;
	}
	cout<<endl;
}
void mergeList(list<int>&first,list<int>&second)
{
	list<int>::iterator itr1 = first.begin();//curr1
//	list<int>::iterator itr = ++itr;//next
	list<int>::iterator itr2 = second.begin();//curr2
	while(itr1!= first.end() && itr2 != second.end())
	{
		first.push_back(*itr2);
		itr2++;
//		itr++;
		itr1++;
	}
	first.sort();
	cout<<"Merged Sorted ";
	display(first);
		
}
int main()
{
	list<int>l1;
	cout<<"List 1: ";
	getData(l1);
	display(l1);
//	l1.sort();
//	display(l1);
	cout<<endl;
	list<int>l2;
	cout<<"List 2: ";
	getData(l2);
	display(l2);
//	sort(l2.begin(),l2.end());
//	l2.sort();
//	display(l2);
	
	//empty list
	if(l1.empty())
	{
		display(l2);
		exit(0);	
	}
	//empty list
	if(l2.empty())
	{
		display(l1);
		exit(0);
	}
	//setting the iterator
	list<int>::iterator itr1 = l1.begin();
	list<int>::iterator itr2 = l2.begin();
	//merging the two lists
	if(*itr1<*itr2)
		mergeList(l1,l2);
	else
		mergeList(l2,l1);

	return 0;
}
