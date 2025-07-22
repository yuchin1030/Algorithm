#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, K;
	cin >> N >> M;

	vector<vector<int>> A(N, vector<int>(M));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> A[i][j];
		}
	}

	cin >> M >> K;

	vector<vector<int>> B(M, vector<int>(K));
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cin >> B[i][j];
		}
	}

	vector<vector<int>> v(N, vector<int>(K, 0));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			for (int k = 0; k < M; k++)
			{
				v[i][j] += A[i][k] * B[k][j];
			}

			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
}