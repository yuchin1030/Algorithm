#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M, N;
	cin >> M >> N;

	int sum = 0; int min = 0; bool flag = false;
	for (int i = 1; i <= 100; i++)
	{
		if (i * i >= M && i * i <= N)
		{
			sum += i * i;

			if (!flag)
			{
				min = i * i;
				flag = true;
			}
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << "\n" << min;
}