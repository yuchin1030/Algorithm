#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	cin >> S;

	int arr[26] = { 0 };

	for (int i = 0; i < S.length(); i++)
	{
		arr[S[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
}