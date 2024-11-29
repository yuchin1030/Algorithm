#include <iostream>
using namespace std;

int main()
{
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];

	if (arr[0] + arr[1] + arr[2] >= 100)
		cout << "OK";
	else
	{
		int value = min(min(arr[0], arr[1]), arr[2]);
		int index = 0;
		for (int i = 0; i < 3; i++)
		{
			if (value == arr[i])
			{
				index = i;
				break;
			}
		}

		switch (index)
		{
		case 0:
			cout << "Soongsil";
			break;
		case 1:
			cout << "Korea";
			break;
		case 2:
			cout << "Hanyang";
			break;
		default:
			break;
		}
	}
	
}