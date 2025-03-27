#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N;
vector<pair<int, int>>v;	// pair, 2개의 연관된 값을 같이 저장할 수 있어서 관리 용이
							// 저장한 값은 .first와 .second로 각각 접근 가능
							// 2개의 정렬조건으로 정렬을 하고 싶을 때 자주 사용

bool cmp(pair<int, int>p1, pair<int, int>p2)
{
	if (p1.second == p2.second)	//끝나는 시간이 같다면
	{
		return p1.first < p2.first;		// 시작하는 시간이 늦은쪽이 오른쪽에 오게금
	}
	return p1.second < p2.second;	// 끝나는 시간이 다르다면 오름차순으로
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });	// vector배열에 pair로 시간대들 저장
	}

	int ans = 0;
	sort(v.begin(), v.end(), cmp);	//이렇게 세번째 인자로 함수를 넣어주면
									// 그 함수의 정렬기준에 따라 정렬해줌

	/*for (auto i : v)
		cout << i.first << ' '<<i.second<<"\n";*/
	
	int temp = 0;
	for (auto a : v)
	{
		if (a.first >= temp)
		{
			ans++;
			temp = a.second;
		}
	}
	cout << ans;
	
	return 0;
}