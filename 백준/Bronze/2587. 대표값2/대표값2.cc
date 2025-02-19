#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		sum += arr[i];
	}

	stable_sort(arr, arr + 5);

	cout << sum / 5 << "\n" << arr[2];
}