#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	stable_sort(arr, arr + 3);

	cout << arr[1];
}