#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int max = 0;
	int index;

	for (int i = 0; i < 9; i++)
	{
		cin >> num;

		if (num > max)
		{
			max = num;
			index = i + 1;
		}
	}

	cout << max << "\n" << index;

}