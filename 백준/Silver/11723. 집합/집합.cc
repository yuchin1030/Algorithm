#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M;
	cin >> M;

	vector<bool> v(21, false);

	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;

		if (str == "add")
		{
			int num;
			cin >> num;

			if (!v[num])
				v[num] = true;
		}
		else if (str == "remove")
		{
			int num;
			cin >> num;

			if (v[num])
				v[num] = false;
		}
		else if (str == "check")
		{
			int num;
			cin >> num;

			if (v[num])
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (str == "toggle")
		{
			int num;
			cin >> num;

			if (v[num])
				v[num] = false;
			else
				v[num] = true;
		}
		else if (str == "all")
		{
			for (int i = 1; i <= 20; i++)
				v[i] = true;
		}
		else if (str == "empty")
		{
			for (int i = 1; i <= 20; i++)
				v[i] = false;
		}
	}
}