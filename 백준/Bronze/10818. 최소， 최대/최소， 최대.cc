#include <iostream> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	

	int N;
	int min, max;
	int arr[1000001];

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	min = max = arr[0];

	// 최솟값
	for (int i = 0; i < N; i++) {
		if (min > arr[i])
			min = arr[i];
	}

	// 최댓값
	for (int i = 0; i < N; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	cout << min << " " << max << "\n";

}