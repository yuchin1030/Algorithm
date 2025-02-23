#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[9][9];
	int max = -1; int x = 0; int y = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];

			if (arr[i][j] > max)
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
	}

	cout << max << "\n" << x + 1 << " " << y + 1;
}