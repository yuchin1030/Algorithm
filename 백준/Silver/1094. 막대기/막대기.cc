#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 64 32 16 8 4 2 1
	int X;
	cin >> X;

	int cnt = 0;

	while (X > 0)
	{
		if (X % 2 == 1)
			cnt++;

		X /= 2;
	}
	
	cout << cnt;
}