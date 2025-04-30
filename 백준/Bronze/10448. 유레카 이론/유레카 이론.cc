#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	// n(n+1) / 2 <= 1000 --> n <= 44
	for (int i = 0; i < T; i++)
	{
		int num;
		cin >> num;

		vector<int> v(45);
		for (int j = 1; j <= 44; j++)
		{
			v[j] = j * (j + 1) / 2;
		}

		bool flag = false;
		for (int m = 1; m <= 44; m++)
		{
			for (int n = 1; n <= 44; n++)
			{
				for (int k = 1; k <= 44; k++)
				{
					if (v[m] + v[n] + v[k] == num)
					{
						flag = true;
						break;
					}
				}
			}
		}

		if (flag)
			cout << "1\n";
		else
			cout << "0\n";
	}

	
}