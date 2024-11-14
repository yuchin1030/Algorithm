#include <iostream>
using namespace std;

int main()
{
	int T;
	string str;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> str;

		int sum = 0; int score = 0;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				score++;
				sum += score;

			}
			else
			{
				score = 0;
			}
		}

		cout << sum << "\n";
	}

}