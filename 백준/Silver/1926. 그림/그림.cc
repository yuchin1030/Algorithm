#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second	
int board[502][502];
bool vis[502][502];
int n, m;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	int cnt = 0;
	int maxV = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 0 || vis[i][j])
				continue;

			queue<pair<int,int>> q;

			vis[i][j] = 1;
			q.push({ i,j });
			cnt++;

			int area = 0;
			while (!q.empty())
			{
				pair<int, int> cur = q.front();
				q.pop();
				area++;

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if (vis[nx][ny] || board[nx][ny] != 1)
						continue;

					vis[nx][ny] = 1;
					q.push({ nx,ny });
				}
			}

			maxV = max(maxV, area);
		}
	}

	cout << cnt << "\n" << maxV;
}