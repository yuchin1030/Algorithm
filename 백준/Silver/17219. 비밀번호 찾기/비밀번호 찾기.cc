#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, string> m;

	for (int i = 0; i < N; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;

		m.insert({ str1, str2 });
	}

	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;

		if (m.find(str) != m.end())
			cout << m[str] << '\n';
	}
}