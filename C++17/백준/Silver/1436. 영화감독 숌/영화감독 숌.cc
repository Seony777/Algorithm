#include<iostream>
#include<string>

using namespace std;

int fc(int n)
{
	string target = "";
	int cnt = 0;

	int i = 666;
	while (1)
	{
		target = to_string(i);		// int형 변수를 string형으로 변환시켜줌
		for (int j = 0; j < target.size() - 2; j++)			// target의 길이가 어떻든 세자리만 확인하면 되므로 target의 길이의 -2까지 확인
		{
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6')
			{
				cnt++;		// 변수 cnt를 통해 몇번째 666연속 수 인지 체크
				if (cnt == n)	// 만약 cnt가 n번째를 의미하는 n과 같아진다면 i를 return하고 함수 종료
				{
					return i;
				}
				break;
			}
		}
		i++;		/// 666부터 667, 668, 669, ........, 1666,.....,2666,.......브루트포스로 모두 확인해보는 것임
	}
}


int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	int N;
	cin >> N;
	cout << fc(N);
}