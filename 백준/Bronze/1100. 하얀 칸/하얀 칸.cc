#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<string> v;

	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		string str; 
		getline(cin, str);

		if (i % 2 == 0)
		{
			for (int j = 0; j < 8; j += 2)
			{
				if (str[j] == 'F')
					cnt++;
			}
		}
		else
		{
			for (int j = 1; j < 8; j += 2)
			{
				if (str[j] == 'F')
					cnt++;
			}
		}
	}
	cout << cnt;
}