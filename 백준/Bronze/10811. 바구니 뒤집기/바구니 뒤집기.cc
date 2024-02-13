#include <iostream> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	
	
	int N, M;	// 바구니 개수, 바구니 순서 바꿀 횟수
	int arr[101];
	int r1, r2;	// 교환할 바구니 번호 범위

	cin >> N >> M;

	// 바구니 번호 지정
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	// 역순
	while(M--) {
		cin >> r1 >> r2;

		for (int i = 0; i < (r2 - r1 + 1) / 2; i++)
			swap(arr[r1 + i], arr[r2 - i]);
		
	}
	
	// 바구니 순서 출력
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}

}