#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		//문자열 반복: string(n,char)을 하면 char가 n번 반복되어 반환된다.
		cout << string(n - (i + 1), ' ');
		cout << string(i + 1, '*')<<endl;	
		
	}
	

	return 0;
}