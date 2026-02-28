#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second	
string board[102];

int n;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void BFS()
{
	int vis[102][102] = {};
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (vis[i][j])
				continue;

			queue<pair<int, int>> q;
			q.push({ i,j });
			vis[i][j] = 1;
			cnt++;

			while (!q.empty())
			{
				auto cur = q.front();
				q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= n)
						continue;
					if (board[nx][ny] != board[cur.X][cur.Y] || vis[nx][ny])
						continue;

					vis[nx][ny] = 1;
					q.push({ nx,ny });
				}
			}


		}
	}
	cout << cnt << " ";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> board[i];
	
	BFS();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 'G')
				board[i][j] = 'R';
		}
	}
	BFS();
	
}