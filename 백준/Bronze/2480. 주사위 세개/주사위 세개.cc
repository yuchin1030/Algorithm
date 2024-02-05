#include <iostream>
#include <algorithm>	// max, min
using namespace std;

int main() {
	int a, b, c;
	int reward = 0;

	cin >> a >> b >> c;

	if (a == b && b == c && c == a)
		reward = 10000 + a * 1000;
	else if ((a == b && a != c) || (a == c && a != b))
		reward = 1000 + a * 100;
	else if (b == c && b != a)
		reward = 1000 + b * 100;
	else
		reward = max(max(a, b), c) * 100;

	cout << reward << endl;

	return 0;
}