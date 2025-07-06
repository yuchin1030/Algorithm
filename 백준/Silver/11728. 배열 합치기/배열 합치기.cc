#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 1. 단순 정렬
	//int N, M;
	//cin >> N >> M;
	//
	//vector<int> v(N+M);
	//for (int i = 0; i < N + M; i++)
	//	cin >> v[i];

	//sort(v.begin(), v.end());

	//for (int i = 0; i < v.size(); i++)
	//	cout << v[i] << " ";

	// 2. 투 포인터
	int N, M;
	cin >> N >> M;

	vector<int> a(N);
	vector<int> b(M);

	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = 0; i < M; i++)
		cin >> b[i];

	int aIndex = 0; int bIndex = 0;

	while (aIndex < N && bIndex < M)
	{
		if (a[aIndex] > b[bIndex])
		{
			cout << b[bIndex] << " ";
			bIndex++;
		}
		else if (a[aIndex] < b[bIndex])
		{
			cout << a[aIndex] << " ";
			aIndex++;
		}
		else
		{
			// 같다면 아무거나 먼저 출력
			cout << a[aIndex] << " ";
			aIndex++;
		}
	}

	while (aIndex < N)
		cout << a[aIndex++] << " ";

	while (bIndex < M)
		cout << b[bIndex++] << " ";
}