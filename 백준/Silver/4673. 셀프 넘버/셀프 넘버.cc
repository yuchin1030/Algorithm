#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<bool> v(10001, false);

	for (int i = 1; i <= 10000; i++)
	{
		int sum = 0; 
		sum += i;

		while (true)
		{
			string str = to_string(sum);

			for (int j = 0; j < str.length(); j++)
			{
				sum += str[j] - '0';
			}

			if (sum <= 10000)
				v[sum] = true;
			else
				break;
		}
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (!v[i])
			cout << i << "\n";
	}
}