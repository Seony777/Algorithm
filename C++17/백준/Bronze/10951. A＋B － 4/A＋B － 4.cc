#include<iostream>


using namespace std;

int main()
{
	int a, b;

	// cin >> a >> b는 입력을 받을 때 정상적으로 입력이 들어오면 true,
	// 파일 끝(EOF)나 입력오류가 발생하면 false가 되어 반복문이 종료가 된다.
	// 예시) int 형식이 아닌 string이나 char 또는 int의 크기를 넘어서는 값을 입력하니 반복문이 종료가 되었다!
	
	while(cin>>a>>b)	//EOF까지 입력을 계속 받음
	{
		cout << a + b << endl;
	}
	

	return 0;
}