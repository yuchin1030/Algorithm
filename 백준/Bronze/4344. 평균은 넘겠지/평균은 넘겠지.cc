#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int C;
	cin >> C;

	for (int i = 0; i < C; i++)
	{
		int N;
		cin >> N;

		vector<int> score(N);

		int sum = 0; int cnt = 0;

		for (int j = 0; j < N; j++)
		{
			cin >> score[j];

			sum += score[j];
		}
		int avg = sum / N;

		for (int j = 0; j < N; j++) {
			if (score[j] > avg)
				cnt++;
		}

		cout << fixed;
		cout.precision(3);
		cout << (double)cnt / N * 100 << "%\n";
	}

}