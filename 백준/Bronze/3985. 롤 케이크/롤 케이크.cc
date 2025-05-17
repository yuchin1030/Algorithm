#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int L, N;
	cin >> L >> N;

	vector<pair<int, int>> v(L + 1);
	vector<bool> b(L + 1, false);

	int max = 0; int num = 0;
	for (int i = 1; i <= N; i++)
	{
		int P, K;
		cin >> P >> K;

		if (K - P > max)
		{
			max = K - P;
			num = i;
		}

		for (int j = P; j <= K; j++)
		{
			if (b[j])
				continue;

			v[j].second = i;
			b[j] = true;
		}
	}

	cout << num << "\n";

	max = 0; num = 0;

	sort(v.begin(), v.end());

	int index = 1; 
	for (int i = 1; i <= N; i++)
	{
		int cnt = 0;
		for (int j = index; j <= L; j++)
		{
			if (v[j].second == 0)
				continue;

			if (v[j].second == i)
			{

				cnt++;
			}
			else
			{
				index = j;
				break;
			}
		}

		if (cnt > max)
		{
			max = cnt;
			num = i;
		}
	}

	cout << num;
}