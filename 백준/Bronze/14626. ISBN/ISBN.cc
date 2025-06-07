#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// 0 = * + 138

	string str;
	cin >> str;

	int sum = 0; int index = 0;
	for (int i = 0; i < 13; i++)
	{
		if (str[i] == '*')
		{
			index = i;
			continue;
		}
		else
		{
			if (i % 2 == 1)
			{
				sum += 3 * (str[i] - '0');
			}
			else
			{
				sum += str[i] - '0';
			}
		}
	}
	
	int num = 0;
	while (true)
	{
		if (index % 2 == 1)
		{
			if ((sum + 3 * num) % 10 == 0)
			{
				cout << num;
				break;
			}
		}
		else
		{
			if ((sum + num) % 10 == 0)
			{
				cout << num;
				break;
			}
		}
		num++;
	}
		
	
}