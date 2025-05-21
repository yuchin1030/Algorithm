#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> v(N, vector<int>(M, 0));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> v[i][j];
		}
	}

	int K;
	cin >> K;

	for (int n = 0; n < K; n++)
	{
		long long sum = 0;

		int i, j, x, y;
		cin >> i >> j >> x >> y;

		for (int m = i - 1; m < x; m++)
		{
			for (int q = j - 1; q < y; q++)
			{
				sum += v[m][q];
			}
		}

		cout << sum << "\n";
	}
}