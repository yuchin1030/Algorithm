#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	queue<int> q;

	for (int i = 1; i <= N; i++)
		q.push(i);

	cout << "<";

	while (q.size() > 1)
	{
		for (int i = 1; i < K; i++)
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}

		cout << q.front() << ", ";
		q.pop();
	}

	cout << q.front() << ">";
}