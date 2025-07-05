#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int pMin = 1000; int eMin = 1000;

	while (M--)
	{
		int p, e;
		cin >> p >> e;

		pMin = min(pMin, p);
		eMin = min(eMin, e);
	}
	
	if (N % 6 != 0)
	{
		int num = N / 6 + 1;
		cout << min(min(pMin * num, pMin * (num - 1) + eMin * (N % 6)), eMin * N);
	}
	else
	{
		int num = N / 6;
		cout << min(min(pMin * num, pMin * (num - 1) + eMin * 6), eMin * N);
	}
}