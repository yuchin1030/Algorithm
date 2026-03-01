#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second	
int dist[301][301];
int l;
int dx[8] = { 1,2,1,2,-1,-2,-1,-2 };
int dy[8] = { 2,1,-2,-1,-2,-1,2,1 };
// 0,0 
// (1,2) (2,1) 4사분면 
// (1,-2) (2,-1) 1사분면 
// (-1,-2) (-2,-1) 2사분면 
// (-1,2) (-2,1) 3사분면 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		cin >> l;

		for (int i = 0; i < l; i++)
			fill(dist[i], dist[i] + l, -1);

		int x, y, nxt, nyt;
		cin >> x >> y;

		queue<pair<int, int>> q;
		q.push({ x,y });
		dist[x][y] = 0;

		cin >> nxt >> nyt;

		while (!q.empty())
		{
			auto cur = q.front();
			q.pop();

			for (int dir = 0; dir < 8; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= l || ny < 0 || ny >= l)
					continue;
				if (dist[nx][ny] >= 0)
					continue;

				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				q.push({ nx,ny });
			}
		}

		cout << dist[nxt][nyt] << "\n";
	}
}