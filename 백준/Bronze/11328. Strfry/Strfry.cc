#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		bool bPossible = true;

		string str1, str2;
		cin >> str1 >> str2;

		vector<int> v(26, 0);

		if (str1.length() == str2.length())
		{
			for (int j = 0; j < str1.length(); j++)
			{
				v[str1[j] - 'a']++;
				v[str2[j] - 'a']--;
			}

			for (int k = 0; k < 26; k++)
			{
				if (v[k] != 0)
				{
					bPossible = false;
					break;
				}
			}

		}
		else
		{
			bPossible = false;
		}

		if (bPossible)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
}