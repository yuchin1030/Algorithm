#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	/*
	n=1 : 1
	n=2 : 2
	n=3 : 3
	n=4 : 1+3+1 = 5
	n=5 : 1+4+3 = 8
	*/

	int n;
	cin >> n;

	long long arr[1001] = { 1,2 };

	for (int i = 2; i < 1001; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;

	cout << arr[n-1];
}