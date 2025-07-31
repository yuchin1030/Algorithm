#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int index = 1; int cnt = 0;
	
	while (index <= N / 2)
	{
		int sum = 0;

		for (int i = index; sum < N; i++)
		{
			sum += i;

			if (sum == N)
			{
				cnt++;
				break;
			}
		}

		index++;
	}

	cout << cnt + 1;
}