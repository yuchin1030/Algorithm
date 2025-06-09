#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	map <string, int> m;
	vector <string> v;

	for (int i = 0; i < N + M; i++)
	{
		string str;
		cin >> str;

		if (m.find(str) != m.end())
			m[str]++;
		else
			m.insert( {str, 1} );
	}

	for (auto it : m)
	{
		if (it.second > 1)
			v.push_back(it.first);
	}

	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
}