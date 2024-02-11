#include <iostream> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	
	
	// 배열 값을 모두 1로 초기화하고, 입력된 숫자면 0으로 값 변경
	// 마지막에 입력 안 된 숫자(초기화 값 그대로 1인 숫자)의 인덱스 출력

	int arr[31];
	fill_n(arr, 30, 1);	

	int input;

	for (int i = 0; i < 28; i++) {
		cin >> input;
		arr[input - 1] = 0;
	}

	for (int i = 0; i < 30; i++) {
		if (arr[i] == 1)
			cout << i + 1 << endl;
	}


}