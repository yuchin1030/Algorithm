#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int cnt = 0; int left = 0; int right = N - 1;
	while (left < right)
	{
		if (v[left] + v[right] < M)
			left++;
		else if (v[left] + v[right] > M)
			right--;
		else if (v[left] + v[right] == M)
		{
			left++;
			right--;
			cnt++;
		}
	}
	
	cout << cnt;
}