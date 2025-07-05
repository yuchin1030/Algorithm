#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int r = a % b;

	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long int a, b;
	cin >> a >> b;
	
	cout << a * b / gcd(a, b);
}