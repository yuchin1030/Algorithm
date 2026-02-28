#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dist[100002];
int n, k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> k;

	fill(dist, dist + 100001, -1);

	queue<int> q;

	dist[n] = 0;
	q.push(n);

	while (dist[k] == -1)
	{
		int cur = q.front();
		q.pop();

		for (int nxt : {cur - 1, cur + 1, 2 * cur})
		{
			if (nxt < 0 || nxt > 100000)
				continue;
			if (dist[nxt] >= 0)
				continue;

			dist[nxt] = dist[cur] + 1;
			q.push(nxt);
		}
	}
	cout << dist[k];
}