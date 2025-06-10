#include <iostream>
#include <map>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, int> m;
	vector<string> v(N+1);

	for (int i = 1; i <= N; i++)
	{
		cin >> v[i];

		m.insert({ v[i], i });
	}

	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;

		// 숫자면
		if (isdigit(str[0]))
		{
			cout << v[stoi(str)] << "\n";
		}
		// 문자열이면
		else
		{
			cout << m[str] << "\n";
		}
	}
}