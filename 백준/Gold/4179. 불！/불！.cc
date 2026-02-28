#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second
string board[1002];
int distFire[1002][1002];	// 불의 전파 시간
int dist[1002][1002];	// 지훈이의 이동 시간
int r, c;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> r >> c;

	queue<pair<int, int>> qFire;
	queue<pair<int, int>> q;

	for (int i = 0; i < r; i++)
	{
		fill(distFire[i], distFire[i] + c, -1);
		fill(dist[i], dist[i] + c, -1);
	}

	for (int i = 0; i < r; i++)
	{
		cin >> board[i];

		for (int j = 0; j < c; j++)
		{
			if (board[i][j] == 'F')
			{
				qFire.push({ i,j });
				distFire[i][j] = 0;
			}
			if (board[i][j] == 'J')
			{
				q.push({ i,j });
				dist[i][j] = 0;
			}
		}
	}

	// 불에 대한 BFS
	while (!qFire.empty())
	{
		pair<int, int> cur = qFire.front();
		qFire.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c)
				continue;
			if (board[nx][ny] == '#' || distFire[nx][ny] >= 0)
				continue;

			distFire[nx][ny] = distFire[cur.X][cur.Y] + 1;
			qFire.push({ nx,ny });
		}
	}

	// 지훈이에 대한 BFS
	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			// **BFS를 돌 때 큐에 쌓이는 순서는 반드시 거리 순.
			// 범위를 벗어났다는것 = 탈출 성공
			// 큐에 거리 순으로 들어가므로 최초에 탈출한 시간 출력하면 됨
			if (nx < 0 || nx >= r || ny < 0 || ny >= c)
			{
				cout << dist[cur.X][cur.Y] + 1;
				return 0;
			}
			// 벽은 못 가게 막음
			if (board[nx][ny] == '#' || dist[nx][ny] >= 0)
				continue;
			// 1. 불이 실제로 오는 칸일때 서로의 도착 시간을 비교해야 함
			// (불이 안 오는 안전지대는 -1값인데 앞 조건문이 없으면 안전지대인데도 지훈이가 못가는 상황 발생)
			/* Ex.
					#######
					#J....#
					###.###
					#F#....
					#######
			*/
			// 2. 지훈이랑 불이 동시에, 또는 불이 더 빨리 도착하는 구간으로는 갈 수 없음
			if (distFire[nx][ny] != -1 && distFire[nx][ny] <= dist[cur.X][cur.Y] + 1)
				continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			q.push({ nx,ny });
		}
	}

	// 여기에 도달했다는 것은 탈출 실패를 의미(탈출했다면 위에서 종료되기 때문)
	cout << "IMPOSSIBLE";
}