#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	vector<int> array(N);	

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}
		// max_element() 함수는 괄호 안에 배열의 시작 주소와 끝주소를 입력해주면
		// 최대값의 주소를 반환한다. 따라서 최대값을 알려면 앞에 *을 붙이자
		
		cout << *min_element(array.begin(), array.end()) << " ";
		cout << *max_element(array.begin(), array.end());


	return 0;
}