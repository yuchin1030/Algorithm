#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 3; i++)
	{
		int h1, m1, s1, h2, m2, s2;
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

		int sec1 = 60 * 60 * h1 + 60 * m1 + s1;
		int sec2 = 60 * 60 * h2 + 60 * m2 + s2;

		sec1 = sec2 - sec1;
		cout << sec1 / 3600 << " " << (sec1 % 3600) / 60 << " " << sec1 % 3600 % 60 << "\n";
	}
}