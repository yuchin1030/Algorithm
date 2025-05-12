#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N, M;
		cin >> N >> M;

		long long answer = 1;
		int k = 1;

		for (int j = M; j > M - N; j--)
		{
			answer *= j;
			answer /= k;
			k++;
		}

		cout << answer << "\n";
	}
}