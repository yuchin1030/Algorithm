#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int M, N;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, K;
	cin >> T;

	while (T--)
	{
		cin >> M >> N >> K;

		int board[52][52] = {};
		bool vis[52][52] = {};

		while (K--)
		{
			int x, y;
			cin >> x >> y;

			board[y][x] = 1;
		}

		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (board[i][j] == 0 || vis[i][j])
					continue;

				queue<pair<int, int>> q;
				q.push({ i,j });
				vis[i][j] = 1;

				while (!q.empty())
				{
					auto cur = q.front();
					q.pop();

					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= N || ny < 0 || ny >= M)
							continue;
						if (board[nx][ny] == 0 || vis[nx][ny])
							continue;

						vis[nx][ny] = 1;
						q.push({ nx,ny });
					}
				}
				cnt++;
			}
		}
		
		cout << cnt << "\n";
	}

}