#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
	
	//c++에선 배열의 크기를 변수로 선언하는 것이 안되므로 이렇게
	//vector<int> 배열이름(변수)를 사용하면 가능하다.
	
	// vector<int> 배열이름 까지만 선언하면 vector는 처음 선언할때 크기가
	// 0이므로 array[i]에 바로 접근하면 범위초과 오류가 발생한다.
	vector<int> array(N);	

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (array[i] < X)
			cout << array[i] << " ";
	}


	return 0;
}