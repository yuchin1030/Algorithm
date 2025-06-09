#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int X;
	cin >> X;

	// 111 123 135 147 159 210 222 234 246 258
	int cnt = 0;

	if (X >= 100)
	{
		cnt += 99;

		for (int i = 100; i <= X; i++)
		{
			string str = to_string(i);

			if (str[0] - str[1] == str[1] - str[2])
				cnt++;
		}
	}
	else
	{
		cnt += X;
	}

	cout << cnt;
}