#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string num;
	cin >> num;

	stack<int> st;

	for (int i = 0; i < num.length(); i++)
	{
		int n = num[i] - '0';

		// 0 이면 0 출력 후 종료
		if (num.length() == 1 && n == 0)
		{
			cout << "0";
			break;
		}

		for (int j = 0; j < 3; j++)
		{
			st.push(n % 2); 
			n /= 2;
		}

		bool flag = false;

		while (!st.empty())
		{
			if (!flag && i == 0 && st.top() == 0)
			{
				st.pop();
			}
			else
			{
				flag = true;
				cout << st.top();
				st.pop();
			}
			
		}
		
	}
}