#include <iostream> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	

	int N, X;
	int a[10001];

	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> a[i];

		if (a[i] < X)
			cout << a[i] << " ";
	}

}