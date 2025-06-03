#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N, M; int cnt = 1;
		cin >> N >> M;

		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int j = 0; j < N; j++)
		{
			int num;
			cin >> num;

			q.push({num, j});
			pq.push(num);
		}
		
		while (true)
		{
			int f = q.front().first;
			int s = q.front().second;

			if (pq.top() != q.front().first)
			{
				q.push(q.front());
				q.pop();
			}
			else
			{
				if (s == M)
					break;
				else
				{
					q.pop();
					pq.pop();
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}
}