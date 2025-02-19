#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C;
	int cnt[10] = { 0 };

	cin >> A >> B >> C;

	string result = to_string(A * B * C);

	for (int i = 0; i < result.length(); i++)
	{
		cnt[result[i] - '0']++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << cnt[i] << "\n";
	}
}