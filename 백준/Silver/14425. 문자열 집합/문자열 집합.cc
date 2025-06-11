#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, bool> m;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		m.insert({ str, true });
	}

	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;

		if (m[str])
			cnt++;
	}

	cout << cnt;
}