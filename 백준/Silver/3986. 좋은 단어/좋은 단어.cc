#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int cnt = 0;
	cin >> N;

	while (N--)
	{
		string str;
		cin >> str;

		stack<char> s;

		for (int i = 0; i < str.length(); i++)
		{
			if (s.empty())
				s.push(str[i]);
			else
			{
				if (s.top() == str[i])
					s.pop();
				else
					s.push(str[i]);
			}
		}

		if (s.empty())
			cnt++;
	}

	cout << cnt;
}