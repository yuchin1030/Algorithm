#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	stack<int> stack;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str == "push")
		{
			string num;
			cin >> num;

			stack.push(stoi(num));
		}
		else if (str == "pop")
		{
			if (stack.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << stack.top() << "\n";
				stack.pop();
			}
		}
		else if (str == "size")
		{
			cout << stack.size() << "\n";
		}
		else if (str == "empty")
		{
			cout << stack.empty() << "\n";
		}
		else if (str == "top")
		{
			if (stack.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << stack.top() << "\n";
			}
		}
	}
}