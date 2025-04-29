#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);
	int B, C;
	long long cnt = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	cin >> B >> C;

	for (int i = 0; i < N; i++)
	{
		if (B >= v[i])
		{
			// 총감독관
			cnt++;
		}
		else if (B < v[i])
		{
			// 총감독관
			cnt++;

			// 부감독관
			if ((v[i] - B) > C)
			{
				if ((v[i] - B) % C == 0)
					cnt += (v[i] - B) / C;
				else
					cnt += (v[i] - B) / C + 1;
			}
			else
			{
				cnt++;
			}
		}
	}

	cout << cnt;
}