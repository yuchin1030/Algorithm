#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;

	for (int i = 1; i <= N; i++)
		q.push(i);

	while (q.size() != 1)
	{
		cout << q.front() << " ";
		q.pop();

		int temp = q.front();
		q.pop();
		q.push(temp);
	}

	cout << q.front();
}