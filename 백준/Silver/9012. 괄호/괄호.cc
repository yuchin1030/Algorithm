#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		string str;
		cin >> str;
		
		stack<char> st;
		bool flag = true;

		for (auto c : str)
		{
			if (c == '(')
				st.push(c);
			else if (!st.empty())
			{
				if (c == ')')
					st.pop();
			}
			else
			{
				flag = false;
				break;
			}
		}

		if (st.empty() && flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}