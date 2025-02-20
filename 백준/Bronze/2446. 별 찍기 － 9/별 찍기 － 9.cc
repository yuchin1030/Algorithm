#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		
		for (int k = 1; k <= 2 * (N - i) + 1; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i <= N - 1; i++)
	{
		for (int j = 1; j < N - i; j++)
		{
			cout << " ";
		}
		
		for (int k = 1; k <= 2 * i + 1; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}