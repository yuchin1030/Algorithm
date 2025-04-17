#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int Rev(string str)
{
	reverse(str.begin(), str.end());

	int num = stoi(str);

	return num;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string X, Y;
	cin >> X >> Y;

	string temp = to_string(Rev(X) + Rev(Y));

	stack<char> st;

	for (int i = 0; i < temp.length(); i++)
	{
		st.push(temp[i]);
	}
	
	bool flag = false;

	while (!st.empty())
	{
		if (st.top() == '0' && !flag)
		{
			st.pop();
			continue;
		}
		else
		{
			flag = true;
			cout << st.top();
			st.pop();
		}
		
	}
	
}