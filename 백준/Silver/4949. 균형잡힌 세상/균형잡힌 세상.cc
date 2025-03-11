#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		stack<char> s;
		string str;
		getline(cin, str);

		if (str == ".")
			break;

		// 스택이 비어있는 것만으로 판단하면
		// )) 와 같은 반례 발생. 따라서 불 변수 하나 필요
		bool bBalanced = true;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				s.push(str[i]);
			}
			else if (str[i] == ')')
			{
				// 닫는 괄호가 먼저 입력됐을때
				if (s.empty())
				{
					bBalanced = false;
					break;
				}
				// ()인 경우만 pop, [) 일 경우 제외
				else if (s.top() == '(')
				{
					s.pop();
				}
				else
				{
					bBalanced = false;
					break;
				}
			}
			else if (str[i] == ']')
			{
				// 닫는 괄호가 먼저 입력됐을때
				if (s.empty())
				{
					bBalanced = false;
					break;
				}
				// []인 경우만 pop, (] 일 경우 제외
				else if (s.top() == '[')
				{
					s.pop();
				}
				else
				{
					bBalanced = false;
					break;
				}
			}
		}
		

		if (s.empty() && bBalanced)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}