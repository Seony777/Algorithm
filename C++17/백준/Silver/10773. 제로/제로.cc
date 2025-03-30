#include<iostream>
#include<stack>

using namespace std;

int k, num, sum;	//전역변수로 선언하면 알아서 0또는 false로 초기화됨
stack<int> s;

int main(void)
{
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> num;

		if (num == 0)
		{
			s.pop();
		}
		else
		{
			s.push(num);
		}
	}
	while(!s.empty())	// stack은 인덱스로 접근이 불가능하기에 주로 while루프를 쓴다.
	{
		sum += s.top();
		s.pop();
	}
	cout << sum;

}