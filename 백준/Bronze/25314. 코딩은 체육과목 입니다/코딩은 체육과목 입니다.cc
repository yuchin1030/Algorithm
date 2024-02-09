#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; // 4 8 12...

	for (int i = 0; i < N / 4; i++) {
		cout << "long ";
	}
	cout << "int" << endl;

	return 0;
}