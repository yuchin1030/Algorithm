#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int K;
	cin >> K;

	stack<int> s;
	long long sum = 0;

	for (int i = 0; i < K; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			if (!s.empty())
			{
				int temp = s.top();
				s.pop();
				sum -= temp;
			}
		}
		else
		{
			s.push(num);
			sum += num;
		}
	}

	cout << sum;
}