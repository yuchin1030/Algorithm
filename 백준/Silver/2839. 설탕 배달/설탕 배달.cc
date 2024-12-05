#include <iostream>
using namespace std;

int main()
{
	int N;
	bool isExist = false;
	cin >> N;

	int min = N / 3;
	for (int i = 0; i <= N / 5; i++)
	{
		int num = N;
		int value = num - 5 * i;

		if (value % 3 == 0 && value / 3 <= min)
		{
			min = i + value / 3;
			isExist = true;
		}
	}

	if (!isExist)
		min = -1;

	cout << min;
}