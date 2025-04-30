#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	stack<char> st;

	for (int i = 0; i < str.length(); i++)
	{
		st.push(str[i]);
	}

	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (st.top() >= 'A' && st.top() <= 'F')
		{
			sum += pow(16, i) * (st.top() - 55);
		}
		else
		{
			sum += pow(16, i) * (st.top() - '0');
		}
		
		st.pop();
	}

	cout << sum;
}