#include <iostream>
#include <stack>
using namespace std;


int N;
stack<int> s;
int num[1000001];
int result[1000001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}

	for (int i = N - 1; i >= 0; i--)
	{
		while (!s.empty() && num[i] >= s.top())
			s.pop();

		if (s.empty())
			result[i] = -1;
		else
			result[i] = s.top();

		s.push(num[i]);
	}

	for (int i = 0; i < N; i++)
		cout << result[i] << " ";
}
// 참고 - https://cocoon1787.tistory.com/347