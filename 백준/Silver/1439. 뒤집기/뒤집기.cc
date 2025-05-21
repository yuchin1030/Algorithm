#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	int zero = 0; int one = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != str[i + 1])
		{
			if (str[i] == '0')
				zero++;
			else
				one++;
		}
	}
	
	cout << min(zero, one);
}