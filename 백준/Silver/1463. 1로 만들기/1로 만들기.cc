#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N + 1);

	v[1] = 0; v[2] = v[3] = 1;

	for (int i = 4; i <= N; i++)
	{
		v[i] = v[i - 1] + 1;

		if (i % 2 == 0)
			v[i] = min(v[i], v[i / 2] + 1);

		if (i % 3 == 0)
			v[i] = min(v[i], v[i / 3] + 1);
	}

	cout << v[N];
}