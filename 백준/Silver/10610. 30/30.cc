#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	sort(str.begin(), str.end(), greater<>());

	if (str[str.length()-1] == '0')
	{
		int sum = 0;
		for (int i = 0; i < str.length(); i++)
		{
			sum += str[i] - '0';
		}

		if (sum % 3 == 0)
			cout << str;
		else
			cout << -1;
	}
	else
		cout << -1;
}