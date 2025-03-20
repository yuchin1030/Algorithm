#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int dot = 2;

	for (int i = 0; i < N; i++)
	{
		dot = 2 * dot - 1;
	}
	cout << dot * dot;

}