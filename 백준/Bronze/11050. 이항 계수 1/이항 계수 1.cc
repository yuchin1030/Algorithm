#include <iostream>
using namespace std;

int main()
{
	int N, K;
	// 분모 분자
	int denominator = 1; int numerator = 1;

	cin >> N >> K;

	for (int i = K; i >= 1; i--)
	{
		denominator *= i;
	}

	for (int i = 1; i <= K ; i++)
	{
		numerator *= N;
		N--;
	}

	cout << numerator / denominator;
}