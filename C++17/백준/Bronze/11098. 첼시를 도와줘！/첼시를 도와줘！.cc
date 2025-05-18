#include<iostream>
#include<string.h>
#include<vector>
#include<utility>
#include<algorithm>


using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	
	int testCase;
	cin >> testCase;
	vector<string> wantPlayers;	// 각 시행에서 가장 몸값이 높은 선수들을 담을 벡터

	for (int i = 0; i < testCase; i++)
	{
		vector<pair<int,string>> prices;	// 이렇게 pair을 이용하여 vector 생성가능

		int players = 0;
		cin >> players;

		for (int i = 0; i < players; i++)
		{
			int price = 0;
			string player;

			cin >> price >> player;
			pair<int, string> p = { price,player };

			prices.push_back(p);	
		}

		auto maxPricePlayer = *max_element(prices.begin(), prices.end());
		// max_element() 함수는 STL에서 컨테이너 안에서 최댓값을 가진 요소를 찾아주는 함수
		// 반환값은 그 요소의 반복자이다.(포인터와 비슷하지만 주소를 추상화한 객체이다)
		// maxPricePlayer에 *반복자를 사용해 그 요소(pair)를 담는다.
		
		wantPlayers.push_back(maxPricePlayer.second);	// .second를 사용해 선수이름을 벡터에 저장
	}

	for (int i = 0; i < wantPlayers.size(); i++)
	{
		cout << wantPlayers[i] << "\n";
	}
	

}