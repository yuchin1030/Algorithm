#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	string str;
	cin >> str;

	for (int i = 0; i < N - 1; i++)
	{
		string temp;
		cin >> temp;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == temp[j])
				continue;
			else
				str[j] = '?';
		}
	}

	cout << str;
}