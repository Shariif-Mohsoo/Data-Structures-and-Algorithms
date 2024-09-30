//program to find the first non repeating characters in string aabc --> a#bb.
#include<iostream>
#include<map>
#include<queue>
using namespace std;
int main()
{
	string str = "aabc";
	
	map<char,int>count;
	queue<char>q;
	cout<<"Input: "<<str<<endl;
	string ans = "";
	for(int i = 0;i<str.length();i++)
	{
		char ch = str.at(i);
		count[ch]++;
		q.push(ch);
		
		while(!q.empty())
		{
			if(count[q.front()] > 1)
				q.pop();
			else
			{
				ans.push_back(q.front());
				break;
			}
		}
		if(q.empty())
		ans.push_back('#');
	}
	cout<<"Output: "<<ans<<endl;
	return 0;
}
