#include<iostream>
#include<algorithm>
#include<vector>
#include<map>


using namespace std;

int score(const vector<int> &dice)	// c++에서 함수 인자로 배열을 넘길 때 주로 길이정보와 같이 넘긴다.

{
	map<int, int> freq;		// map: 파이썬의 딕셔너리와 같은 기능 <키, 밸류>

	for (int d : dice)
	{
		freq[d] += 1;		// map은 기본생성자를 통해 자동으로 0을 넣어주기 때문에
							// 접근 가능!
	}

	if (freq.size() == 1)
	{
		return 50000 + dice[0] * 5000;
	}

	else if (freq.size() == 2)
	{
		int pair1 = 0;
		int pair2 = 0;
		for (auto &pair : freq)
		{
			if (pair.second == 3)	// 3개의 눈이 같음
			{
				return 10000 + pair.first * 1000;
			}

			else if (pair.second == 2)	// 2쌍의 눈이 같음
			{
				if (!pair1)
				{
					pair1 = pair.first;
				}
				else
				{
					pair2 = pair.first;
				}
			}
		}
		return 2000 + (pair1 + pair2) * 500;
	}

	else if (freq.size() == 3)		// 1쌍의 눈이 같음
	{
		for (auto &pair : freq)
		{
			if (pair.second == 2)
			{
				return 1000 + pair.first * 100;
			}
		}
	}

	else
	{
		return *max_element(dice.begin(), dice.end()) * 100;	// max()는 두개의 값중에서만 최대를 반환
	}
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	int N = 0;
	cin >> N;

	int maxScore = 0;
	for (int i = 0; i < N; i++)
	{
		vector<int> dice(4);	// 사람별로 나온 주사위 결과를 담을 배열

		for (int i = 0; i < 4; i++)
		{
			cin >> dice[i];
		}

		maxScore = max(maxScore, score(dice));	// 상금계산 함수를 통해 얻은 상금을 상금배열에 넣기
	}

	cout << maxScore;


	return 0;

}