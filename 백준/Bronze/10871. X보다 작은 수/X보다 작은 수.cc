#include <iostream> 
using namespace std;

int main() {
	int N, X;
	int a[10001];

	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> a[i];

		if (a[i] < X)
			cout << a[i] << " ";
	}

}