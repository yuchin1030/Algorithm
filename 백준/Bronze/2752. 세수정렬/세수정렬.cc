#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> num(3);

	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];
	}

	stable_sort(num.begin(), num.end());

	cout << num[0] << " " << num[1] << " " << num[2];
}