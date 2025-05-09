#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = N; i >= 4; i--)
	{
		int cnt = 0;

		string str = to_string(i);

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '4' || str[j] == '7')
			{
				cnt++;
			}
			else
			{
				break;
			}
		}

		if (cnt == str.length())
		{
			cout << str;
			break;
		}
	}
}