#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, C;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> C;

		cout << C / 25 << " " << (C % 25) / 10 << " " << ((C % 25) % 10) / 5 << " " << ((C % 25) % 10) % 5 << "\n";
	}
}