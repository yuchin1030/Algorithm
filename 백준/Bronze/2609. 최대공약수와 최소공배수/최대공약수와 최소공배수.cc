#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
	int a, b;

	cin >> a >> b;

	int GCD = gcd(a, b);
	int LCM = a * b / GCD;

	cout << GCD << "\n" << LCM;
}

int gcd(int a, int b)
{
	// 처음부터 나머지가 0이 나올 수도 있으니까
	int r = a % b;
	
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

/* 유클리드 호제법
두 수 a, b 중 a > b 라면
a % b = r1
b % r = r2
r % r2 = r3
...
rn-1 % rn = 0이 될 때까지 반복한다.
0이 될때의 나누어지는 수가 최대공약수(rn)

+) 최소공배수의 공식
최소공배수 * 최대공약수 = 두 수의 곱

// a, b 값이 main 함수와 gcd 함수에서 왜 다른지 궁금하면
https://yuchin1030.tistory.com/26
*/