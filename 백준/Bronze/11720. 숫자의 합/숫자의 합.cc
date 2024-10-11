#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	char num;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> num;

		sum += (int)num - 48;
	}

	cout << sum;

}