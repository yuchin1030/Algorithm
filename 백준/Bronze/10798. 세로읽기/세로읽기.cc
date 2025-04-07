#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string arr[15][15];

	for (int i = 0; i < 5; i++)
	{
		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			arr[i][j] = str[j];
		}
	}
	// 0,0 + 1,0 + 2,0...
	// 0,1 + 1,1 + 2,1...
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[j][i];
		}
	}
}