#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];
bool visited[101];
int cnt = 0;

void dfs(int n)
{
	visited[n] = true;

	for (int i = 0; i < v[n].size(); i++)
	{
		if (!visited[v[n][i]])
		{
			dfs(v[n][i]);
			cnt++;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, num;
	cin >> N >> num;

	for (int i = 0; i < num; i++)
	{
		int x, y;
		cin >> x >> y;

		// edge 연결
		v[x].push_back(y);
		v[y].push_back(x);
	}

	dfs(1);

	cout << cnt;
}