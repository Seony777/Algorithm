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
		string command;
		cin >> command;

		if (command == "push")
		{
			cin >> num;
			s.push(num);
		}

		else if (command == "pop")
		{
			if (s.size() == 0)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}

		else if (command == "size")
		{
			cout << s.size() << "\n";
		}

		else if (command == "empty")
		{
			if (s.size() == 0)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}

		else if (command == "top")
		{
			if (s.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
			}
		}
	}
	return 0;
}