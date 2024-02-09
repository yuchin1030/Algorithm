#include <iostream>
using namespace std;

int main() {
	int X;	// 총 금액
	int N;	// 물건 종류 수
	int a, b;	// 물건 가격, 개수

	cin >> X >> N;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum += a * b;
	}

	if (sum == X)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
		 
	return 0;
}