#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	if (N < 10)
		cout << N;
	else
	{
		int cnt = 0;
		for (int i = 1; i <= N; i *= 10)
		{
			cnt += N - i + 1;
		}
        cout << cnt;
	}
	
}