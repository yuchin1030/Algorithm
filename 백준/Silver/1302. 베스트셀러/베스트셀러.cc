#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map<string, int> m;

	int max = 1;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (m.find(str) != m.end())
		{
			m[str]++;
			
			if (m[str] > max)
				max = m[str];
		}
		else
			m.insert({ str, 1 });
	}

	for (auto mm : m)
	{
		if (mm.second == max)
		{
			cout << mm.first;
			break;
		}
		
	}
}