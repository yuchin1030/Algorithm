#include <iostream>
using namespace std;

// 배열 입력받는거 익숙해지기
int main() {
	int N;
	int arr[101];	// int arr[N] 불가, 1 <= N <= 100
	int v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];	
	}

	cin >> v;

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v)
			cnt++;
	}
	
	cout << cnt << endl;

}