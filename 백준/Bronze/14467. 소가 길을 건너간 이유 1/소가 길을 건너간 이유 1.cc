#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, bool>> v(N+1);
	vector<bool> b(N + 1, false);

	int cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		int x, y;
		cin >> x >> y;

		if (!b[x])
		{
			b[x] = true;
			v[x].second = y;
		}
		else
		{
			if (v[x].second == y)
			{
				continue;
			}
			else
			{
				v[x].second = y;
				cnt++;
			}
		}
		
	}

	cout << cnt;
}