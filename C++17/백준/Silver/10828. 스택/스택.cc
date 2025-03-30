#include<iostream>
#include<stack>

using namespace std;

int n, num;
stack<int> s;

int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0);
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string order;

		cin >> order;

		if (order == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (order == "pop")
		{
			if (s.size() == 0)
				cout << -1<<'\n';
			else
			{
				cout << s.top()<<'\n';
				s.pop();
			}
		}
		else if (order == "size")
		{
			cout << s.size()<<'\n';
		}
		else if (order == "empty")
		{
			if (s.size() == 0)
				cout << 1<<'\n';
			else
				cout << 0<<"\n";
		}
		else if (order == "top")
		{
			if (s.size() == 0)
				cout << -1<<'\n';
			else
				cout << s.top()<<'\n';
		}
	}
	return 0;
}