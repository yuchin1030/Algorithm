#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A, B, C, D, E, F;
	int result = 0;

	cin >> A >> B >> C >> D >> E >> F;

	result += A + B + C + D + max(E, F);
	result -= min(min(min(A, B), C), D);

	cout << result;
}