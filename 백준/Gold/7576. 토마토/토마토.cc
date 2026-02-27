#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second
int board[1002][1002];
int dist[1002][1002];
int m, n;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> m >> n;


	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];

			if (board[i][j] == 1)
			{
				q.push({ i,j });
				// 전역 변수로 잡은 int나 int 배열은 따로 초기화를 안하면 0이 채워짐
				// 따라서 밑 코드 필요 없음
				// dist[i][j] = 0;
			}
			else if (board[i][j] == 0)
				dist[i][j] = -1;
		}
	}

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (dist[nx][ny] >= 0) // board[nx][ny] == -1 도 필요없음(board값이 -1인 칸도 자동으로 dist값이 0이기 때문)
				continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			q.push({ nx,ny });
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dist[i][j] < 0)
			{
				cout << -1;
				return 0;
			}
			cnt = max(cnt, dist[i][j]);
		}
	}

	cout << cnt;
}