#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

#define X first
#define Y second
int board[102][102];
bool vis[102][102];
int n;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	int maxV = 1; int maxCnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> board[i][j];

			maxV = max(board[i][j], maxV);
		}
	}
	
	for (int height = 0; height <= maxV; height++)
	{
		// 최대값 구해야 하니까 전체 초기화
		int cnt = 0;
		for (int i = 0; i < n; i++)
			fill(vis[i], vis[i] + n, 0);

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] > height && vis[i][j] == 0)
				{
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
							if (board[nx][ny] <= height || vis[nx][ny] == 1)
								continue;

							q.push({ nx,ny });
							vis[nx][ny] = 1;
						}
					}
				}
			}
		}

		maxCnt = max(maxCnt, cnt);
	}

	cout << maxCnt;
}