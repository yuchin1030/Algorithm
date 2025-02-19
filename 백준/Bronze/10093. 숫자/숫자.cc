#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long A, B;

	cin >> A >> B;

	long long temp = 0;
	if (A > B)
	{
		temp = A;
		A = B;
		B = temp;
	}

	if (A == B)
	{
		cout << 0;
	}
	else 
	{
		cout << B - A - 1 << "\n";

		for (long long i = A + 1; i < B; i++)
		{
			cout << i << " ";
		}
	}

}