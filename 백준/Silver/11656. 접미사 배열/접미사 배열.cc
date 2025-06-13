#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	set<string> s; int index = 0;
	for (int i = 0; i < str.length(); i++)
	{
		string temp;
		for (int j = index; j < str.length(); j++)
		{
			temp += str[j];
		}

		s.insert(temp);
		index++;
	}

	for (auto c : s)
		cout << c << "\n";
}