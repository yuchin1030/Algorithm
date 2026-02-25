#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;

	while (getline(cin, str))
	{
		if (str == ".")
			break;
		
		stack<char> st;
		bool flag = true;

		for (auto c : str)
		{
			if (c == '(' || c == '[')
				st.push(c);
			else if (c == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					flag = false;
					break;
				}
				st.pop();
			}
			else if (c == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					flag = false;
					break;
				}
				st.pop();
			}
		}

		if (st.empty() && flag)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}