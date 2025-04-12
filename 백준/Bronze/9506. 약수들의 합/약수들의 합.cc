#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	while (cin >> n)
	{
		if (n == -1)
			break;

		vector<int> v;
		for (int i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				v.push_back(i);
				v.push_back(n / i);
			}
		}

		sort(v.begin(), v.end());

		int sum = 0;
		for (int i = 0; i < v.size() - 1; i++)
		{
			sum += v[i];
		}

		if (sum == n)
		{
			cout << n << " = ";

			for (int i = 0; i < v.size() - 1; i++)
			{
				if (i == v.size() - 2)
					cout << v[i] << "\n";
				else
					cout << v[i] << " + ";
			}
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
	}
}