#include<iostream>
#include<set>


using namespace std;

int main()
{
	set<int> num;	//정수형 'set' 선언
	
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		num.insert(a % 42);		//num세트에 나머지 값들 삽입
	}
	cout << num.size();
}