#include <iostream>
using namespace std;

int main() {
	int a, b;

	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0)	// a, b == 0 (X) --> b만 0 되는거 인식함
			break;

		cout << a + b << "\n";	// 0은 출력되면 안 됨
	}

}