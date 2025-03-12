#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; int num[46] = {0, 1};

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}

	cout << num[n];
}