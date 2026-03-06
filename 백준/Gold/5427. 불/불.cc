#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second	
string board[1002];
int distFire[1002][1002];
int dist[1002][1002];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		int w, h;
		cin >> w >> h;

		queue<pair<int, int>> qFire;
		queue<pair<int, int>> q;

		for (int i = 0; i < h; i++)
		{
			fill(distFire[i], distFire[i] + w, -1);
			fill(dist[i], dist[i] + w, -1);
		}

		for (int i = 0; i < h; i++)
		{
			cin >> board[i];

			for (int j = 0; j < w; j++)
			{
				if (board[i][j] == '@')
				{
					q.push({ i,j });
					dist[i][j] = 0;
				}
				else if (board[i][j] == '*')
				{
					qFire.push({ i,j });
					distFire[i][j] = 0;
				}
			}
		}

		// 불에 대한 BFS
		while (!qFire.empty())
		{
			auto cur = qFire.front();
			qFire.pop();

			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= h || ny < 0 || ny >= w)
					continue;
				if (board[nx][ny] == '#' || distFire[nx][ny] >= 0)
					continue;

				qFire.push({ nx,ny });
				distFire[nx][ny] = distFire[cur.X][cur.Y] + 1;
			}
		}

		// 상근이에 대한 BFS
		bool flag = false;
		while (!q.empty())
		{
			auto cur = q.front();
			q.pop();

			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= h || ny < 0 || ny >= w)
				{
					cout << dist[cur.X][cur.Y] + 1 << "\n";
					flag = true;
					break;
				}
				if (board[nx][ny] == '#' || dist[nx][ny] >= 0)
					continue;
				if (distFire[nx][ny] != -1 && distFire[nx][ny] <= dist[cur.X][cur.Y] + 1)
					continue;

				q.push({ nx,ny });
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			}

			if (flag)
				break;
		}

		if (!flag)
			cout << "IMPOSSIBLE\n";
	}
}