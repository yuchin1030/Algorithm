#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long num;
	cin >> num;

	long long sum = 0;
	for (long long i = 1; i < num; i++)
	{
		sum += num * i + i;
	}
	cout << sum;
}