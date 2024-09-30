//program to reverse the k elements in queue
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
	int k = 2;
	//reversing the queue
	stack<int>s;
	int i = 0;
	while(i<k)
	{
		int top=q.front();
		q.pop();
		s.push(top);
		i++;
	}
	while(!s.empty())
	{
		int top = s.top();
		s.pop();
		q.push(top);
	}
	int t = q.size() - k;
	while(t--)
	{
		int top = q.front();
		q.pop();
		q.push(top);
	}
	return 0;
}
