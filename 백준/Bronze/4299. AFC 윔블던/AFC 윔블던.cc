#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sum, sub;

	cin >> sum >> sub;

	int a = (sum + sub) / 2;
	int b = sum - a;

	if (a + b == sum && abs(a - b) == sub && sum >= sub)
		cout << max(a, b) << " " << min(a, b);
	else
		cout << -1;

}