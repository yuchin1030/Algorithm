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

		stack<char> st;

		if (str.length() % 2 == 1)
			continue;

		for (auto c : str)
		{
			if (st.empty())
				st.push(c);
			else if (c == st.top())
				st.pop();
			else
				st.push(c);
		}
		
		if (st.empty())
			cnt++;
	}

	cout << cnt;
}