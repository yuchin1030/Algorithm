#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	while (N--)
	{
		string str;
		cin >> str;

		list<char> L;
		list<char>::iterator cursor = L.end();

		for (auto ch : str)
		{
			switch (ch)
			{
			case '<':
				if (cursor != L.begin())
					cursor--;
				break;
			case '>':
				if (cursor != L.end())
					cursor++;
				break;
			case '-':
				if (cursor != L.begin())
				{
					cursor--;
					cursor = L.erase(cursor);
				}
				break;
			default:
				L.insert(cursor, ch);
				break;
			}
		}

		for (auto c : L)
			cout << c;
		cout << "\n";
	}

	
}