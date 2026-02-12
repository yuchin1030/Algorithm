#include <iostream>
#include <utility>
#include <queue>
using namespace std;

#define X first
#define Y second	// pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[502][502];
int vis[502][502];
int n, m;	// 행, 열

// 상하좌우 네 방향을 의미
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

/* 
x: 행, y: 열
		(x-1,y)
(x,y-1)	(x,y) (x, y+1)
		(x+1,y)
*/
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	int cnt = 0;	// 그림 개수
	int maxV = 0;	// 가장 넓은 그림의 넓이

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			// 연결 안 된 칸(빨간 칸)이거나 연결된 칸이지만 이미 방문했을 경우
			if (board[i][j] == 0 || vis[i][j])
				continue;

			// BFS의 새로운 시작점 찾기
			queue<pair<int, int>> q;
			vis[i][j] = 1; // 방문했다고 명시
			q.push({ i,j });	// 파란 칸이면 큐에 삽입
			cnt++;

			// 큐에 시작점인 (0, 0)을 삽입
			int area = 0;	// 그림의 넓이
			while (!q.empty())
			{
				pair<int, int> cur = q.front();
				q.pop();
				area++;

				for (int dir = 0; dir < 4; dir++)
				{
					// (1,0) (0,1) (-1,0) (0,-1)
					// 하 우 상 좌
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