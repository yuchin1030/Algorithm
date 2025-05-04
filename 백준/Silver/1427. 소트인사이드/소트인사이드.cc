#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	cin >> N;

	sort(N.begin(), N.end(), greater<char>());

	for (int i = 0; i < N.length(); i++)
	{
		cout << N[i];
	}
}