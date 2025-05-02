#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < 9; i++)
	{
		int num;
		cin >> num;

		N -= num;
	}
	cout << N;
}