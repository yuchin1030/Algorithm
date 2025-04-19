#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + 5);

	int num = arr[0];

	while(true)
	{
		int cnt = 0;

		for (int i = 0; i < 5; i++)
		{
			if (num % arr[i] == 0)
				cnt++;
		}

		if (cnt >= 3)
		{
			cout << num;
			break;
		}
		else
		{
			num++;
		}
	}
}
