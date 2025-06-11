#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; long long M;
	cin >> N >> M;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	int cnt = 0; int index = 0;
	while (true)
	{
		int sum = 0;
		for (int i = index; i < N; i++)
		{
			sum += v[i];
			
			if (sum > M)
				break;
			else if (sum == M)
			{
				cnt++;
				break;
			}
		}

		index++;

		if (index == N)
			break;
	}

	cout << cnt;
}