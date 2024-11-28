#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	string str[10];

	for (int i = 0; i < N; i++)
	{
		cin >> str[i];

		reverse(str[i].begin(), str[i].end());

		cout << str[i] << "\n";
	}
}