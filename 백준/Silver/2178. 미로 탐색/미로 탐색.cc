#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second

string board[102];	// 미로 표현용 2차원배열
int dist[102][102];		// 이동칸 기록용 2차원 배열
int N, M;	// 행 열
int dx[4] = {-1, 1, 0, 0};	// 상하좌우 x축 방향
int dy[4] = {0,0,-1,1};		// 상하좌우 y축 방향

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
			cin >> board[i];

	for (int i = 0; i < N; i++)
		fill(dist[i], dist[i] + M, -1);

	queue<pair<int, int>> q;
	q.push({ 0,0 });
	dist[0][0] = 0;

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
				continue;
			if (dist[nx][ny] >= 0 || board[nx][ny] != '1')
				continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			q.push({ nx,ny });
		}
	}

	cout << dist[N - 1][M - 1] + 1;
}