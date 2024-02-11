#include <iostream> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	
	
	int N;	// 바구니
	int arr[101];
	int M;	// 공 넣는 횟수

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		arr[i] = { 0 };
	}

	int r1, r2, num;
	for (int i = 0; i < M; i++) {
		cin >> r1 >> r2 >> num;

		for (int j = r1; j <= r2; j++) {
			arr[j] = num;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}


}