#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int sum = 0;
	int min = 100;

	for (int i = 0; i < 7; i++)
	{
		cin >> num;

		if (num % 2 != 0)
		{
			sum += num;

			if (num < min)
				min = num;
		}
	}

	if (sum != 0)
		cout << sum << "\n" << min;
	else
		cout << "-1";
}