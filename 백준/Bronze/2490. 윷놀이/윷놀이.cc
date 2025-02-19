#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[4];
	int cnt = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[j];

			// 배의 개수
			if (arr[j] == 0)
				cnt++;
		}

		switch (cnt)
		{
		case 0:
			cout << "E\n";
			break;
		case 1:
			cout << "A\n";
			break;
		case 2:
			cout << "B\n";
			break;
		case 3:
			cout << "C\n";
			break;
		case 4:
			cout << "D\n";
			break;
		}

		cnt = 0;
	}

}