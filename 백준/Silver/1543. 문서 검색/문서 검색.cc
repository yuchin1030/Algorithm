#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str, word;
	getline(cin, str); getline(cin, word);
	
	int cnt = 0;

	if (str.length() < word.length())
	{
		cout << cnt;
		return 0;
	}

	for (int i = 0; i <= str.length() - word.length();)
	{
		bool flag = true;
		
		for (int j = 0; j < word.length(); j++)
		{
			if (str[i + j] != word[j])
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			cnt++;
			i += word.length();
		}
		else
			i++;
	}
	
	cout << cnt;
}