#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// (0)11 001 100
	string str;
	cin >> str;

	stack<char> st;
	stack<int> result;

	for (int i = 0; i < str.length(); i++)
	{
		st.push(str[i]);
	}
	
	while (!st.empty())
	{
		int sum = 0;

		for (int i = 0; i < 3; i++)
		{
			if (st.empty())
				break;

			sum += (st.top() - '0') * pow(2, i);
			st.pop();
		}

		result.push(sum);
	}
	
	while(!result.empty())
	{
		cout << result.top();
		result.pop();
	}
}