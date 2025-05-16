#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string A, B;
		cin >> A >> B;

		if (A.length() != B.length())
		{
			cout << A << " & " << B << " are NOT anagrams.\n";
			continue;
		}

		vector<int> v(26, 0); bool flag = false;
		
		for (int j = 0; j < A.length(); j++)
		{
			v[A[j] - 'a']++;

			v[B[j] - 'a']--;
		}

		for (int k = 0; k < 26; k++)
		{
			if (v[k] != 0)
			{
				flag = true;
				break;
			}
		}

		if (flag)
			cout << A << " & " << B << " are NOT anagrams.\n";
		else
			cout << A << " & " << B << " are anagrams.\n";
	}
}