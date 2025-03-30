#include<iostream>
#include<queue>

using namespace std;

int n, x;
queue<int> q;

int main(void)
{
	string o;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> o;
		
		if (o == "push")
		{
			cin >> x;
			q.push(x);
		}
		else if (o == "pop")
		{
			if (q.empty())
				cout << -1 << endl;
			else
			{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (o == "size")
		{
			cout << q.size()<<endl;
		}
		else if (o == "empty")
		{
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (o == "front")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (o == "back")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}
}