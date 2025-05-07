#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N, M;
		cin >> N >> M;

		int cnt = 0;
		for (int j = N; j <= M; j++)
		{
			string str = to_string(j);

			for (int k = 0; k < str.length(); k++)
			{
				if (str[k] == '0')
					cnt++;
			}
		}
		cout << cnt << "\n";
	}
}