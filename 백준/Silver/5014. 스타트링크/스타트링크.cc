#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dist[1000002];
int f, s, g, u, d;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> f >> s >> g >> u >> d;

	fill(dist, dist + f+1, -1);

	queue<int> q;
	q.push(s);
	dist[s] = 0;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int nxt : {cur - d, cur + u})
		{
			if (nxt <= 0 || nxt > f)
				continue;
			if (dist[nxt] >= 0)
				continue;

			q.push(nxt);
			dist[nxt] = dist[cur] + 1;
		}
	}
	if (dist[g] == -1)
		cout << "use the stairs";
	else
		cout << dist[g];
}