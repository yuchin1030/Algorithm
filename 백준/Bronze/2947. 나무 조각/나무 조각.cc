#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v(5);

	for (int i = 0; i < 5; i++)
	{
		cin >> v[i];
	}

	while (true)
	{
		if (v[0] == 1 && v[1] == 2 && v[2] == 3 && v[3] == 4 && v[4] == 5)
			break;

		for (int i = 0; i < 4; i++)
		{
			if (v[0] == 1 && v[1] == 2 && v[2] == 3 && v[3] == 4 && v[4] == 5)
				break;

			if (v[i] > v[i + 1])
			{
				int temp;
				temp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = temp;

				for (int j = 0; j < 5; j++)
				{
					cout << v[j] << " ";
				}
				cout << "\n";
			}
		}
	}
	

}