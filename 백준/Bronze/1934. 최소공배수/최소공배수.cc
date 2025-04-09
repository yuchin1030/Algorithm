#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	while (x % y != 0)
	{
		return gcd(y, x % y);
	}

	return y;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;

		if (A == 1 || B == 1)
			cout << A * B << "\n";
		else
		{
			// 유클리드 호제법
			// 최대 공약수 : x, y 에서 y 와 x % y를 계속 나눔
			// 최소 공배수 : 두 수의 곱 / 최대공약수
			if (A > B)
				cout << A * B / gcd(A, B) << "\n";
			else
				cout << A * B / gcd(B, A) << "\n";
		}
	}
}
// 17 13 4
// 13 4 1
// 4 1 0