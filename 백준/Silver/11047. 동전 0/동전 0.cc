#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	
	vector<int> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	int sum = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		if (K == 0)
			break;

		while (K / v[i] > 0)
		{
			sum += K / v[i];
			K %= v[i];
			break;
		}
	}
	
	cout << sum;
}