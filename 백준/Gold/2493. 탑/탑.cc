#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	stack<pair<int, int>> s;

	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;

		while (!s.empty())
		{
			// 스택의 top이 현재 입력한 값보다 크다면 신호를 받을 수 있음
			if (s.top().second > num)
			{
				cout << s.top().first << ' ';
				break;
			}
			else
			{
				// 수신탑 찾을 때까지 계속 pop
				// 스택의 top이 입력값보다 작다면 필요없음
				// (앞으로의 값들은 이 입력값으로 들어오기 때문)
				s.pop();
			}
		}

		if (s.empty())
			cout << "0 ";

		s.push({ i, num });
	}
}