#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	bool arr[100][100] = { false };
	int cnt = 0;

	while (N--)
	{
		int x, y;
		cin >> x >> y;

		for (int i = x; i < x + 10; i++)
		{
			for (int j = y; j < y + 10; j++)
			{
				if (arr[i][j])
					continue;
				
				arr[i][j] = true;
				cnt++;
			}
		}
	}
	
	cout << cnt;
}