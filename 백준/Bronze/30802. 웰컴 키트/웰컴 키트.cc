#include <iostream>
using namespace std;

int main()
{
	int N;
	int size[6];
	int T, P;

	// 주문해야할 티셔츠 개수
	int sum = 0;

	cin >> N;
	for (int i = 0; i < 6; i++)
	{
		cin >> size[i];
	}
	cin >> T >> P;

	for (int i = 0; i < 6; i++)
	{
		if (size[i] % T == 0)
			sum += size[i] / T;
		else
			sum += size[i] / T + 1;
	}

	cout << sum << "\n";
	cout << N / P << " " << N % P;
}