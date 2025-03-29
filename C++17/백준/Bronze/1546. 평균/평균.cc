#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

double change(int score, int M)
{
	double h;
	h = (score / (double)M) * 100;
	return h;
}


int main()
{
	int n,M;
	cin >> n;
	vector<int> score(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
	}

	M = *max_element(score.begin(),score.end());
	

	double sum = 0;

	for (int i : score)
	{
		sum += change(i, M);
	}

	cout << sum / n;
		
	
	
	

}