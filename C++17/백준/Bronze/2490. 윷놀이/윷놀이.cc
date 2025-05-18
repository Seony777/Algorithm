#include<iostream>
#include<string.h>
#include<vector>
#include<utility>
#include<algorithm>


using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	
	int q;
	vector<int> answer;

	for (int i = 0; i < 3; i++)
	{
		vector<int> yout;
		int numOfOne = 0;

		for (int i = 0; i < 4; i++)
		{
			cin >> q;
			yout.push_back(q);
		}
		numOfOne = count(yout.begin(), yout.end(), 1);
		answer.push_back(numOfOne);
	}

	for (int i : answer)
	{
		if (i == 1)
		{
			cout << "C" << "\n";
		}
		else if (i == 2)
		{
			cout << "B" << "\n";
		}
		else if (i == 3)
		{
			cout << "A" << "\n";
		}
		else if (i == 4)
		{
			cout << "E" << "\n";
		}
		else if (i==0)
		{
			cout << "D" << "\n";
		}
	}

}