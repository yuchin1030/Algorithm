#include <iostream>
#include <vector>
using namespace std;

int arr[1002][1002] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int x, y, w, h;
		cin >> x >> y >> w >> h;

		for (int j = x; j <= x + w - 1; j++)
		{
			for (int k = y; k <= y + h - 1; k++)
			{
				arr[j][k] = i;
			}
		}
	}

	vector<int> v(N + 1, 0);

	for (int i = 0; i < 1002; i++)
	{
		for (int j = 0; j < 1002; j++)
		{
			v[arr[i][j]]++;
		}
	}

	for (int i = 1; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}


}