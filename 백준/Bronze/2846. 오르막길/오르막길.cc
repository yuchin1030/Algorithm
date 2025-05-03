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

	int index = 0; int max = 0;
	for (int i = 0; i < N - 1; i++)
	{
		if (v[i] < v[i + 1])
		{
			if (i == N - 2)
			{
				if (v[i + 1] - v[index] > max)
					max = v[i + 1] - v[index];
				else
					continue;
			}
			continue;
		}
		else
		{
			if (v[i] - v[index] > max)
				max = v[i] - v[index];
			
			index = i + 1;
		}
	}

	cout << max;
}