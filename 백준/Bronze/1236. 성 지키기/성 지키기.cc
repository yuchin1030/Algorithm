#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<char>> v(N, vector<char>(M));
	bool row[50] = { false };
	bool col[50] = { false };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> v[i][j];

			if (v[i][j] == 'X')
			{
				row[i] = true;
				col[j] = true;
			}
		}
	}

	int rowCnt = 0; int colCnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (!row[i])
			rowCnt++;
	}

	for (int j = 0; j < M; j++)
	{
		if (!col[j])
			colCnt++;
	}
	cout << max(rowCnt, colCnt);
}