#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
	int num;
	vector<int> student(30);

	for (int i = 0; i < 28; i++)
	{
		cin >> num;
		student[num-1] = num;
	}
	int target = 0;
	vector<int> indices;

	for (int i=0;i<30;i++)
	{
		if (student[i] == 0)
			indices.push_back(i + 1);
	}

	cout << *min_element(indices.begin(), indices.end()) << endl;
	cout << *max_element(indices.begin(), indices.end());
}