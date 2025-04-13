#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;

	int i = 1; int index = 1;
	int arr[10000];

	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[index] = i;
			index++;

			if (index > 1000)
				break;
		}
	}

	int sum = 0;
	for (int i = A; i <= B; i++)
	{
		sum += arr[i];
	}

	cout << sum;
}