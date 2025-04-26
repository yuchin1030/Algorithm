#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M, N;
	cin >> M >> N;

	bool isPrime[10001];
	fill(isPrime, isPrime + 10001, true);

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i <= N; i++)
	{
		if (isPrime[i])
		{
			for (int j = 2 * i; j <= N; j += i)
			{
				isPrime[j] = false;
			}
		}
	}

	int sum = 0; int min = -1;
	for (int i = M; i <= N; i++)
	{
		if (isPrime[i])
		{
			if (sum == 0)
				min = i;

			sum += i;
		}

	}

	if (min == -1)
		cout << min;
	else
		cout << sum << "\n" << min;
}
