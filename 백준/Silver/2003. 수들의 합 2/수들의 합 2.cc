#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; long long M;
	cin >> N >> M;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	// 1. 브루트포스 - O(N^2)
	//int cnt = 0; int index = 0;
	//while (true)
	//{
	//	long long sum = 0;
	//	for (int i = index; i < N; i++)
	//	{
	//		sum += v[i];
	//		
	//		if (sum > M)
	//			break;
	//		else if (sum == M)
	//		{
	//			cnt++;
	//			break;
	//		}
	//	}

	//	index++;

	//	if (index == N)
	//		break;
	//}

	//cout << cnt;

	// 2. 투포인터 알고리즘 - O(N)
	int cnt = 0; int start = 0; int end = 0;
	long long sum = v[0];

	while (end < N)
	{
		if (sum > M)
		{
			sum -= v[start];
			start++;
		}
		else if (sum < M)
		{
			end++;

			if (end < N)
				sum += v[end];
		}
		else if (sum == M)
		{
			cnt++;
			end++;

			if (end < N)
				sum += v[end];
		}
	}

	cout << cnt;
}