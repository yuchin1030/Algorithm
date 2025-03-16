#include <iostream>
#include <stack>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	stack<int> s;
	int seq = 1;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (num == seq)
			seq++;
		else
			s.push(num);

		while (!s.empty() && s.top() == seq)
		{
			s.pop();
			seq++;
		}
	}

	if (s.empty())
		cout << "Nice";
	else
		cout << "Sad";
}