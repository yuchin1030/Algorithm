#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v(10);

	for (int i = 0; i < 10; i++)
	{
		cin >> v[i];
	}
	
	int sum = 0; 
	for (int i = 0; i < 10; i++)
	{
		int temp = sum;
		sum += v[i];

		if (sum >= 100)
		{
			if (100 - temp < abs(100 - sum))
				cout << temp;
			else
				cout << sum;

			break;
		}
	}

	if (sum < 100)
		cout << sum;
}