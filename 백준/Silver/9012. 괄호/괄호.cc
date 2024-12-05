#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		stack<char> stack;
		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
			{
				stack.push(str[j]);
			}
			else if (str[j] == ')')
			{
				if (stack.empty())
				{
					stack.push(str[j]);
					break;
				}
				else
				{
					stack.pop();
				}
			}
		}

		if (stack.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
// 참고 : https://park-peanut.tistory.com/29