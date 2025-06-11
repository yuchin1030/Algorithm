#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<string> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;

		if (binary_search(v.begin(), v.end(), str))
			cnt++;
	}

	cout << cnt;

	/*map<string, bool> m;
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

	cout << cnt;*/
}