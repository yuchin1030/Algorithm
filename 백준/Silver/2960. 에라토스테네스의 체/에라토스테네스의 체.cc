#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	map<int, bool> m;

	for (int i = 1; i <= N; i++)
	{
		m.insert({i, false});
	}

	int cnt = 0; int index = 2;
	for (int i = 2; i <= N; i++)
	{
		for (int j = i; j <= N; j += i)
		{
			if (cnt == K)
				break;
			else if (!m[j])
			{
				m[j] = true;
				cnt++;
				index = j;
			}
		}
		
	}

	cout << index;
}