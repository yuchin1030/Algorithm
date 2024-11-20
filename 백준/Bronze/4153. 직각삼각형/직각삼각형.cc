#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	vector<int> num(3);

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> num[i];
		}

		if (num[0] == 0 && num[1] == 0 && num[2] == 0)
			break;
		else
		{
			stable_sort(num.begin(), num.end());

			if (pow(num[2], 2) == pow(num[0], 2) + pow(num[1], 2))
				cout << "right\n";
			else
				cout << "wrong\n";
		}

	}
}