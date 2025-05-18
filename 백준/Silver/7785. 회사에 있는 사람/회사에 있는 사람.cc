#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	map<string, string, greater<>> m;

	for (int i = 0; i < n; i++)
	{
		string name, flag;
		cin >> name >> flag;

		m[name] = flag;
	}

	map<string, string>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		if (it->second == "enter")
			cout << it->first << "\n";
	}
}