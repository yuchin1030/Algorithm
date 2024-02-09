#include <iostream> 
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	

	int arr[9];
	int max = 0;
	int pos = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];

		if (max < arr[i]) {
			max = arr[i];
			pos = i + 1;
		}
	}
	
	cout << max << "\n" << pos;

}