#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	vector<int> v(num);
	for (int i = 0; i < num; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	
	cout << v.front() * v.back();
}