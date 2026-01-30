#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M, cnt = 0;
	cin >> N >> M;

	deque<int> d;

	for (int i = 1; i <= N; i++)
		d.push_back(i);

	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;

		// find: 찾고자 하는 값(num)이 있는 주소(iterator)
		// iterator - iterator(d.begin()) = 처음부터 몇 번째 위치인지(거리)
		int index = find(d.begin(), d.end(), num) - d.begin();
		
		while (d.front() != num)
		{
			if (index < d.size() - index)
			{
				d.push_back(d.front());
				d.pop_front();
			}
			else
			{
				d.push_front(d.back());
				d.pop_back();
			}
			cnt++;
		}
		d.pop_front();
	}
	cout << cnt;
}