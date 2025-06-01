#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int num = round(n * 0.15);

	double sum = 0;
	
	for (int i = num; i < n - num; i++)
	{
		sum += v[i];
	}
	
	cout << round(sum / (n - num * 2));
	
}