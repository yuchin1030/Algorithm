#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	cin >> N;

	for (int i = 0; i < N.length(); i++)
	{
		cout << N[i];

		if (i % 10 == 9)
		{
			cout << "\n";
		}
	}
}