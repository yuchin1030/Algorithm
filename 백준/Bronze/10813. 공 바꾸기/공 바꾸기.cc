#include <iostream> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	
	
	int N, M;	// 바구니, 공 교환 횟수
	int arr[101];
	int b1, b2;	// 교환할 바구니 번호

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	int temp = 0;

	for (int j = 0; j < M; j++) {
		cin >> b1 >> b2;

		temp = arr[b1];
		arr[b1] = arr[b2];
		arr[b2] = temp;
		
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}


}