#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string L;
		cin >> L;
		
		list<char> l;
		list<char>::iterator it = l.begin();

		for (int j = 0; j < L.length(); j++)
		{
			if (L[j] == '<')
			{
				if (it != l.begin())
					it--;
			}
			else if (L[j] == '>')
			{
				if (it != l.end())
					it++;
			}
			else if (L[j] == '-')
			{
				if (it != l.begin())
				{
					it--;
					it = l.erase(it);
				}
			}
			else
			{
				l.insert(it, L[j]);
			}

		}

		for (char c : l)
			cout << c;

		cout << "\n";
	}
}