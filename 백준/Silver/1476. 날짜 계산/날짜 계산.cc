#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int E, S, M;
	cin >> E >> S >> M;

	int i, j, k;
	i = j = k = 1;

	int cnt = 1;
	while (true)
	{
		if (i == E && j == S && k == M)
		{
			cout << cnt;
			break;
		}

		i++; j++; k++; cnt++;

		if (i > 15)
			i = 1;
		if (j > 28)
			j = 1;
		if (k > 19)
			k = 1;
	}
}