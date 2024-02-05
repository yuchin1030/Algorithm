#include <iostream>
using namespace std;

// 분 + 15 (45분 이하)
// 시간은 0일때만 조심
int main() {
	int a, b;	// 현재 시각
	int c;		// 요리하는 데 필요한 시간

	cin >> a >> b >> c;

	if ((b + c) >= 60) {
		a += (b + c) / 60;
		b = (b + c) % 60;

		if (a >= 24)
			a -= 24;
	}
	else
		b += c;

	cout << a << " " << b << endl;

	return 0;
}