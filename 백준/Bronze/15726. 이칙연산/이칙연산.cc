#include <iostream>
using namespace std;

int main()
{
	double A, B, C;

	cin >> A >> B >> C;

	double result1 = A * B / C;
	double result2 = A / B * C;

	cout << int(max(result1, result2));
}