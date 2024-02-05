#include <iostream>
using namespace std;

// 분 + 15 (45분 이하)
// 시간은 0일때만 조심
int main() {
	int hour, min;

	cin >> hour >> min;

	if (min < 45) {
		min += 15;
		hour -= 1;

		if (hour < 0)
			hour = 23;
	} else {
		min -= 45;
	}

	cout << hour << " " << min << endl;

	return 0;
}