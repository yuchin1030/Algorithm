#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 스위치 개수
	int N;
	cin >> N;

	map<int, bool> m;

	for (int i = 1; i <= N; i++)
	{
		bool flag;
		cin >> flag;
		m.insert({ i, flag });
	}

	// 학생 수
	int K;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		int gender; int num;
		cin >> gender >> num;

		switch (gender)
		{
		// 남학생
		case 1:
			for (int j = num; j <= N; j += num)
			{
				m[j] = !m[j];
			}
			break;
		// 여학생
		case 2:
			int left = num; int right = num;

			while (left > 0 && right <= N)
			{
				if (m[left] != m[right])
					break;

				left--; right++;
			}
			
			for (int j = left + 1; j <= right - 1; j++)
			{
				m[j] = !m[j];
			}
			break;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << m[i] << " ";

		if (i % 20 == 0)
			cout << "\n";
	}
}