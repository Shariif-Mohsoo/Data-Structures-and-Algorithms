//program to reverse the queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
	queue<int>q;
	q.push(2);
	q.push(3);
	q.push(1);
	q.push(4);
	
	//reversing the queue
	stack<int>s;
	while(!q.empty())
	{
		int top=q.front();
		q.pop();
		s.push(top);
	}
	while(!s.empty())
	{
		int top = s.top();
		s.pop();
		q.push(top);
	}
	return 0;
}
