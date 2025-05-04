#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	string str;
	cin >> str;

	vector<bool> v(N+1);
	
	for (int i = 0; i < N; i++)
	{
		if (str[i] == 'S')
		{
			v[i] = v[i + 1] =  true;
		}
		else
		{
			v[i] = v[i + 2] = true;
			
			i++;
		}
	}

	int cnt = 0;
	for (int i = 0; i < N + 1; i++)
	{
		if (v[i])
			cnt++;
	}

	if (cnt > N)
		cout << N;
	else
		cout << cnt;
}