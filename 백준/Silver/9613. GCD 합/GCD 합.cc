#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	int r = a % b;

	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		vector<int> v(n);
		for (int j = 0; j < n; j++)
			cin >> v[j];

		long long sum = 0;
		for (int k = 0; k < n - 1; k++)
		{
			for (int m = k + 1; m < n; m++)
			{
				sum += gcd(v[k], v[m]);
			}
		}

		cout << sum << "\n";
	}
	
}