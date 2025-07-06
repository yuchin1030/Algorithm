#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;

	int f, g;

	bool flag = true;
	for (int n = n0; n <= 100; n++)
	{
		f = a1 * n + a0;
		g = c * n;

		if (f > g)
		{
			flag = false;
			break;
		}
	}
	
	if (flag)
		cout << 1;
	else
		cout << 0;
}