#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	// 7
	int max = 0;
	for (int i = 0; i < N - 1; i++)
	{
		int cnt = 0;
		for (int j = i + 1; j < N; j++)
		{
			
			if (v[i] < v[j])
				break;
			else
				cnt++;
		}

		if (cnt > max)
			max = cnt;
	}
	cout << max;
}