#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	deque<int> d;

	for (int i = 1; i <= N; i++)
		d.push_back(i);
	
	int index; int cnt = 0;

	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;

		for (int j = 0; j < d.size(); j++)
		{
			if (d[j] == num)
			{
				index = j;
				break;
			}
		}

		// 앞
		if (index <= d.size() / 2)
		{
			while (true)
			{
				if (d.front() == num)
				{
					d.pop_front();
					break;
				}

				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}
		}
		// 뒤
		else
		{
			while (true)
			{
				if (d.front() == num)
				{
					d.pop_front();
					break;
				}

				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}
		}

	}

	cout << cnt;
}