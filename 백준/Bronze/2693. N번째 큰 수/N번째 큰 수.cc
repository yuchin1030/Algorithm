#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int arr[10];

		for (int j = 0; j < 10; j++)
		{
			cin >> arr[j];
		}

		stable_sort(arr, arr + 10);

		cout << arr[7] << "\n";
	}
}